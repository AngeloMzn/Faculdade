n = list(map(int, input('digite a lista:').split()))

posição = int(input('digite a posição:'))

elemento = int(input('digite o elemento:'))

for i in range(len(n)):
    if i == posição:
        n.append(n[i])
        n[i] = elemento

print(n)
