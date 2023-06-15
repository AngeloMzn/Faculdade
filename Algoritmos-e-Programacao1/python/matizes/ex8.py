matriz = []

somaLinha = [] 

somador = 0


for i in range(3):
    matriz.append(list(map(int, input('digite numeros:').split()))[0:5])


for i in range(3):
    for j in range(5):
        somador = matriz[i][j] + somador
        if j == 4:
            somaLinha.append(somador)
            somador = 0

menorSoma = somaLinha[0]

for i in range(len(somaLinha)):
    if somaLinha[i] < menorSoma:
        menorSoma = somaLinha[i]
        posicao = i

print('Vetor correspondente `a soma dos elementos de cada uma das linhas da matriz:')

for i in range(len(somaLinha)):
    print(somaLinha[i], end= ' ')

print()

print('Linha cujo soma dos elementos é a menor dentre todas as linhas:')

print(posicao)