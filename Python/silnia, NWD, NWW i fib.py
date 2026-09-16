def NWD(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a

def NWW(a, b):
    return a * b / NWD(a, b)

def sil(n):
    if (n == 0 or n == 1): return 1
    return n * sil(n - 1)

def fib(f):
    if (f == 0): return 0
    if (f == 1): return 1
    return fib(f - 1) + fib(f - 2)

a = int(input("Podaj wartość a: "))
b = int(input("Podaj wartość b: "))

print(f"NWD({a} i {b}) = {NWD(a, b)}")
print(f"NWW({a} i {b}) = {NWW(a, b)}")

n = int(input("Podaj wartość n: "))
f = int(input("Podaj wartość f: "))

print(n,"! = ", sil(n))
for f in range(f):
    print(fib(f), end=" ")

