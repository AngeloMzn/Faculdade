matrizNotas = []

for i in range(10):
    matrizNotas.append(list(map(float, input('digite os numeros:').split())))

pioresProvas = []

parametroNota = 10

for i in range(10):
    for j in range(3):
        if matrizNotas[i][j] < parametroNota:
            parametroNota = j
            pioresProvas.append(parametroNota)   
    print(i, end = ' ')
    print(parametroNota, end = ' ')

parametroNota = 10

cont = 0

piorNota = []

for j in range(3):
    for i in range(10):
        if matrizNotas[i][j] < parametroNota:
            parametroNota = matrizNotas[i][j]
    piorNota.append(parametroNota) 

quantidadePiorNota = []

for j in range(3):
    for i in range(10):
        if matrizNotas[i][j] == piorNota[j]:
            cont+=1
    quantidadePiorNota.append(cont)
    cont = 0

for i in range(len(quantidadePiorNota)):
    print(quantidadePiorNota[i], end = ' ')   



    
