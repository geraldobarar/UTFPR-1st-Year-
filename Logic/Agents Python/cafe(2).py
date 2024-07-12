#com ciclo
#sem crenças iniciais


def tem_cafe (crencas):
    if crencas [0] == "po" or crencas [0] == "graos":
        return True
    else:
        return False

def fazer_cafe(crencas):
    if crencas[0] == "po" and crencas[1] == "cafeteira":
        print("Fazer café filtrado")
    elif crencas [0] == "graos" and crencas[1]== "maquina":
        print("Fazer café expresso")
    else:
        print("Não fazer café, crenças conflitantes")

agente = "on"

while agente == "on":
    cr1 = input ("crença 1: ")
    cr2 = input("crença 2: ")
    crencas = cr1, cr2

    print("\n")

    cafe = tem_cafe(crencas)

    if (cafe == True):
        fazer_cafe(crencas)
    else:
        print("Ir ao mercado comprar café")

    agente = input("\n Agente ativo ('on')? ")