import random
def zgadnij_liczbe():
    wylosowana = random.randint(1, 10)
    proby = 0
    
    print("Zgadnij liczbę od 1 do 10")
    
    while True:
        tekst = int(input("Twoja propozycja: "))
        proby += 1
                    
        if tekst < wylosowana:
            print("Za mało!")
        elif tekst > wylosowana:
            print("Za dużo!")
        else:
            print(f"Brawo! Udało się w {proby} próbach!")
            break

zgadnij_liczbe()