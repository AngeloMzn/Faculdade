n = list(map(int, input('digite a lista:').split()))

k = int(input('digite um numero:'))

for i in range(len(n)):
    if n[i] == k:
        for j in range(i, len(n)-1):
            n[j] = n[j + 1]
n.pop()

print(n)
