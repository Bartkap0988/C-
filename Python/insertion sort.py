def insertion(T):
    n = len(T)
    for i in range(1, n):
        klucz = T[i]
        j = i - 1
        while j >= 0 and T[j] > klucz:
            T[j + 1] = T[j]
            j = j - 1
        T[j + 1] = klucz

T = []
n = int(input("Podaj wartosc tablicy: "))
for i in range(n):
    elem = float(input(f"Podaj {i + 1}. element tablicy: "))
    T.append(elem)
insertion(T)
for i in range(n):
    print(T[i])