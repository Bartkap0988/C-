a = int(input("Podaj pierwsza liczbe: "))
b = int(input("Podaj druga liczbe: "))

x, y = a, b
while True:
    if b == 0:
        break;
    else:
        r = a % b
        a = b
        b = r
        
nwd = a
        
print("NWD = ", a)
print("NWW = ", (x*y)//nwd)
