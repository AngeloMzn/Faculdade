n = list(map(int, input('linha:').split()))

m = list(map(int, input('linha:').split()))

matriz = [n, m]

tamanhoN = len(n)

tamanhoM = len(m)

for i in range(tamanhoN):
    n[i] = n[i]*2

for j in range(tamanhoM):
    m[j] = m[j]*2

print(matriz)