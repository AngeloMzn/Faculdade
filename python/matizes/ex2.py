linha2 = list(map(int, input('linha:').split()))

linha2 = list(map(int, input('linha:').split()))

matriz = [linha2, linha2]

tamanho1 = len(linha2)

tamanho2 = len(linha2)

for i in range (tamanho1):
    if linha2[i]>0 and linha2[i]>linha2[i-1]:
        maiorN1 = linha2[i]
    if linha2[i]>0 and linha2[i]<linha2[i-1]:
        maiorN1 = linha2[i-1]

for i in range (tamanho2):
    if linha2[i]>0 and linha2[i]>linha2[i-1]:
        maiorN2 = linha2[i]
    if linha2[i]>0 and linha2[i]<linha2[i-1]:
        maiorN2 = linha2[i-1]
if maiorN1>maiorN2:
    print(maiorN1)
else:
    print(maiorN2)