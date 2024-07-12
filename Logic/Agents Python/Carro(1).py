import random

agente = {"nome":"Veiculo", "existeObstaculo":False,  "velocidade": 60, "sensor": "sim", "localização": "naVia"}
print(f"Crenças iniciais do agente: {agente['nome']}")
print(agente)


def verificar_obst():
    obst = random.choice ([True, False])
    print(obst)
    return obst

def desviar():
    verificar_velocidade()
    if (agente["velocidade"]>=60):
        print("Reduzir velocidade!")
        agente["velocidade"] = agente["velocidade"] - 10
    else:
        print("Manter velocidade para manobra")
    
    print("Realizar manobra de desvio")


def verificar_velocidade():
    velocidade_atual = random.randint(40,80)
    agente["velocidade"] = velocidade_atual
    print(f"\n Velocidade: {agente['velocidade']}")


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

    flag = verificar_obst()
    if (flag == True):
        print("Obstaculo na Via")
        agente ["existeObstaculo"] = True
        desviar()
    else:
        agente["existeObstaculo"] = False
    
    conduzir()
    print("\n")

    sensor = input("Seguir na via? (sim/não):  ")

agente["sensor"] =  sensor
print(f"\nCrenças finais do agente {agente['nome']}")
print(agente)