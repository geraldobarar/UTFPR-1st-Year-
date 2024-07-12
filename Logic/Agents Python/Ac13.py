from maspy import *
import random

class MonitoramentoUrbano(Environment):
    def __init__(self, env_name):
        super().__init__(env_name)
        self.create(Percept("cruzamento_livre"))

    def observarCruzamento(self, src):
        ocupado = random.choice([True, False])
        print(ocupado)
        if ocupado == True:
            self.print("cruzamento livre!")
            self.create(Percept("livre"))
        else:
            self.print("Cruzamento Ocupado!")
            self.create(Percept("ocupado"))
        

class VA(Agent):
    def __init__(self, agt_name):
        super().__init__(agt_name)
        self.add(Belief("noCruzamento"))

    @pl (gain, Belief("noCruzamento"))
    def verificar_cruzamento(self, src):
        self.print("Verificar Via Urbana")
        percepcao1 = self.get(Belief("cruzamento_livre", source = "Cruzamento"))
        if percepcao1:
            self.action("Cruzamento").observarCruzamento(self.my_name)
        self.add(Goal("verificar_acao"))

    @pl (gain, Goal("verificar_acao"), Belief("noCruzamento"))
    def verificar_acao(self, src):
        percepcao2 = self.get(Belief("livre", source = "Cruzamento"))
        percepcao3 = self.get(Belief("ocupado", source = "Cruzamento"))
        if percepcao2:
            self.print("Passando pelo Cruzamento!")
            self.send("ControladorRemoto", tell, Belief("VA_operacional"))
            self.stop_cycle()
        elif percepcao3:
            self.add(Belief("obstaculo"))
            self.add(Goal("parar"))
        else:
            self.add(Goal("verificar_acao"))
        

    @pl (gain, Goal("parar"), Belief("obstaculo"))
    def avisar_CT(self, src):
        self.print("Parada: acionar CT")
        self.send("ControladorRemoto", tell, Belief("VA_parar"), "V2C")

    @pl (gain, Goal("Frear"))
    def executar_manobra(self, src):
        self.print(f"Parada confirmada pelo CT: {src}")
        self.stop_cycle()


class CT(Agent):
    def __init__(self, agent_name):
        super().__init__(agent_name)

    @pl(gain, Belief("VA_parar"))
    def mandarAcao(self, src):
        self.send("Waymo", achieve, Goal("Frear"), "V2C")
        self.stop_cycle()

    @pl (gain, Belief("VA_operacional"))
    def desligar(self, src):
        self.stop_cycle()

if __name__ == "__main__":
    monitor = MonitoramentoUrbano("Cruzamento")
    veiculo = VA("Waymo")
    controlador = CT("ControladorRemoto")
    comunicacao_ch = Channel("V2C")
    Admin().connect_to([veiculo, controlador], [comunicacao_ch, monitor])
    Admin().start_system()