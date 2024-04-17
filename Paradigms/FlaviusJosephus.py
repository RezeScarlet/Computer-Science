NC = int(input())

for i in range(0, NC):
    N = int(input())
    K = int(input())
    pessoas = []

    for j in range(0, N):
        pessoas.append(j)

    K = K - 1
    contador = K

    while len(pessoas) > 1:
        pessoas.pop(contador)
        contador = (contador + K) % len(pessoas)

    print(f"Case {i + 1} : {pessoas[0] + 1}")
