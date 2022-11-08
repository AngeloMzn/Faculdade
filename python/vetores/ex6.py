n = list(map(int, input('digite a lista:').split()))

inserido = int(input('digite o inserido:'))

ultimo = n[-1]

for i in range(len(n)):
    if n[i] < inserido:
        for j in range(i, len(n)-1):
            n[j + 1] = n[j]
            n[i] = inserido
n.append(ultimo)
print(n)