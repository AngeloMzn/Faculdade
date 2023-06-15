matriz = []

somaLinha = [] 

somador = 0

maiorSoma = 0

for i in range(5):
    matriz.append(list(map(int, input('digite numeros:').split()))[0:3])

for i in range(5):
    for j in range(3):
        somador = matriz[i][j] + somador
        if j == 2:
            somaLinha.append(somador)
            somador = 0

for i in range(len(somaLinha)):
    if somaLinha[i] > maiorSoma:
        maiorSoma = somaLinha[i]
        posicao = i

print('Vetor correspondente `a soma dos elementos de cada uma das linhas da matriz:')
for i in range(len(somaLinha)):
    print(somaLinha[i], end= ' ')
print()
print('Linha cujo soma dos elementos é a maior dentre todas as linhas:')
print(posicao)