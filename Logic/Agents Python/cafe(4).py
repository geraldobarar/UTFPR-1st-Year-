#Com estrutura de dicionario e Ciclo
 
 
agente = {"nome":"Cafeteira Sala", "temAgua":False,  "temGraos":False, "capacidade":2, "preparada": False}
print(f"Crenças iniciais do agente: {agente['nome']}")
print(agente)

def maquina_preparada():
    if (agente["temAgua"]== True) and (agente["temGraos"] == True):
        agente["preparada"] = True
        return True
    else:
        return False

def preparar_maquina ():
    if (agente["temAgua"] == False):
        print("Recarregar Agua")
        recarregar_maquina()
    else:
        print("Maquna recarregada")

    if (agente["temGraos"] == False):
        print("Comprar grãos...")
        comprar_graos()
    else:
        print("Maquina com Grãos")

def recarregar_maquina():
    print("Máquina recarregada")
    agente ["temAgua"] = True

def comprar_graos():
    print("Maquina com grãos")
    agente ["temGraos"] = True

def fazer_cafe():
    print(f"\n Crenças do agente (preparando o café): {agente['nome']}")
    print(agente)
    print("Café pronto!")
    agente["preparada"] = False
    agente["temAgua"] = False
    agente["temGraos"] = False

agente_ativo = 'on'
while agente_ativo == 'on':

    flag1 = maquina_preparada()
    if (flag1 == True):
        fazer_cafe()
    else:
        preparar_maquina()
    print("\n")

    agente_ativo = input("Agente ativo ('on')? ")


print(f"\nCrenças finais do agente {agente['nome']}")
print(agente)
        