#com 2 agentes
#VA = Veículo Autônomo
#AE = Autoridade Externa

import random

agente = {"nome":"Veiculo", "existeObstaculo":False,  "velocidade": 60, "sensor": "sim", "localização": "naVia"}
print(f"Crenças iniciais do agente: {agente['nome']}")
print(agente)

agenteAE = {"nome": "AE", "msg_do_VA": "ok", "velocidadeVA": 00, "sensorVA": False, "localizaçãoVA":"NI"}

def verificar_obst():
    obst = random.choice ([True, False])
    return obst

def desviar():
    verificar_velocidade()
    if (agente["velocidade"]>=60):
        print("Reduzir velocidade!")
        agente["velocidade"] = agente["velocidade"] - 10
    else:
        print("Manter velocidade para manobra")

    manobra_executada = realizar_manobra()
    return manobra_executada


def verificar_velocidade():
    velocidade_atual = random.randint(40,80)
    agente["velocidade"] = velocidade_atual
    print(f"\n Velocidade: {agente['velocidade']}")

def realizar_manobra():
    manobra = random.choice([True, False])
    if (manobra == True):
        print("Realizar manobra de desvio")
        return True
    else:
        print("Acionar Autoridade Externa!")
        acionar_AE()
        return False

def acionar_AE():
    agenteAE["msg_do_VA"] = "problema"
    agenteAE["velocidadeVA"] = agente["velocidade"]
    agenteAE["sensorVA"] = agente["sensor"]
    agenteAE["localizacaoVA"] = agente["localização"]
    print(agenteAE)


def conduzir():
    verificar_velocidade()
    if (agente ["velocidade"] >= 70):
        print("Reduzir a velocidade!")
        agente["velocidade"] = agente["velocidade"] - 15
    else:
        print("Manter a velocidade para a condução")
    
    print("Seguir conduzindo na Via")

sensor = agente["sensor"]
while sensor == 'sim':

    obstaculo = verificar_obst()
    if (obstaculo == True):
        print("Obstaculo na Via")
        agente ["existeObstaculo"] = True
        desvio_executado = desviar()
        if (desvio_executado == True):
            conduzir()
            print("\n")
            sensor = input ("Seguir na via? (sim/não) ")
        else: 
            sensor = 'não'
            print("Aguardando Autoridade Externa")
    else:
        agente["existeObstaculo"] = False  
        conduzir()
        print("\n")
        sensor = input("Seguir na via? (sim/não):  ")

agente["sensor"] =  sensor
print(f"\nCrenças finais do agente {agente['nome']}")
print(agente)