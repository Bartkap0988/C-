def silnia(n):
    if n == 0 or n == 1:
        return 1
    return n * silnia(n-1)
def fib(f):
    if f == 0:
        return 0
    if f == 1:
        return 1
    return fib(f-1) + fib(f-2)

n = int(input("Podaj wartosc n: "))
f = int(input("Podaj wartosc f: "))
print (n,"! = ", silnia(n))
print ("fib z", f, " = ",)
for f in range(f):
    print (fib(f), end=" ")