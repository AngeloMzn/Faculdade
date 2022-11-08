matriz = []

somador = 0

R = []

for i in range(3):
    matriz.append(list(map(int, input('digite a matriz:').split()))[0:5])

V = list(map(int, input('digite o vetor V:').split()))

for i in range(len(matriz)):
    for j in range(5):
        somador = somador + (matriz[i][j] * V[i])
        if j == 4:
            R.append(somador)
            somador = 0

for i in range(3):
    print(R[i], end = ' ')
