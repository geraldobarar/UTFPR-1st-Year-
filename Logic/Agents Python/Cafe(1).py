crencas = ("graos", "maquina")

print("Crenças do agente: ")
print(crencas)

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

cafe = tem_cafe (crencas)

if (cafe == True):
    fazer_cafe(crencas)
else:
    print("Ir ao mercado comprar café")

