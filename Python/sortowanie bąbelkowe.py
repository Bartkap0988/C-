def bubblesort(T):
    n = len(T)
    for i in range(n):
        for j in range(0, n - i - 1):
            if T[j] > T[j + 1]:
                temp = T[j]
                T[j] = T[j + 1]
                T[j + 1] = temp
    return T

T = []
n = int(input("Podaj wartosc tablicy: "))
for i in range(n):
    elem = float(input(f"Podaj wartosc {i + 1} elementu: "))
    T.append(elem)
bubblesort(T)
for i in range(n):
    print(T[i])