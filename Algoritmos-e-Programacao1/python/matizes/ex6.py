matriz = []

maior = [0, 0, 0, 0, 0]

for i in range(5):
    matriz.append(list(map(int, input('digite um numero:').split()))[0:3])
    
for i in range(5):
    for j in range(3):
        if matriz[i][j] > maior [i]:
            maior[i] = matriz[i][j]

print("Maior elemento de cada linha:")

for i in range(5):
    for j in range(3):
        if matriz[i][j] == maior [i]:
            print(f"M[{i+1}][{j+1}] = {maior[i]}")
            

