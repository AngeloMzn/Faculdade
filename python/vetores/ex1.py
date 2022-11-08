n = list(map(int, input('digite a lista:').split()))

k = int(input('digite um numero:'))

for i in range(len(n)):
    if n[i] == k:
        n[i] = n[-1]
        n.pop()
        break
print(n)




