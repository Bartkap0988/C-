def linear(T, cel):
    n = len(T)
    for i in range(n):
        if T[i] == cel:
            return i
    return -1

n = int(input("Podaj wartosc tablicy: "))
cel = float(input("Podaj szukany element: "))
T = []
for i in range(n):
    elem = float(input(f"Podaj wartosc {i + 1} elementu: "))
    T.append(elem)
wynik = linear(T, cel)
if wynik != -1:
    print(f"Liczba znaleziona na indeksie: {wynik}")
else:
    print("Nie ma takiej liczby.")