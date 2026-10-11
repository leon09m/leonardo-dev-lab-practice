import random

jogador1 = input("Digite a opção desejada (1-Papel, 2-Rocha, 3-Tesoura): ")
jogador1win = False;
jogador2 = random.randint(1, 3)

while jogador1win == False:  

    # Caso de vitória
    if jogador1 == "1" and jogador2 == 2:
        
        jogador1win = True
    elif jogador1 == "2" and jogador2 == 3:
        
        jogador1win = True
    elif jogador1 == "3" and jogador2 == 1:
        
        jogador1win = True

    # Caso de derrota
    elif jogador1 == "1" and jogador2 == 3:
        print("voce perdeu, jogue novamente")
        jogador2 = random.randint(1, 3)
        jogador1 = input("Digite a opção desejada (1-Papel, 2-Rocha, 3-Tesoura): ")
    elif jogador1 == "2" and jogador2 == 1:
        print("voce perdeu, jogue novamente")
        jogador2 = random.randint(1, 3)
        jogador1 = input("Digite a opção desejada (1-Papel, 2-Rocha, 3-Tesoura): ") 
    elif jogador1 == "3" and jogador2 == 2:
        print("voce perdeu, jogue novamente")
        jogador2 = random.randint(1, 3)
        jogador1 = input("Digite a opção desejada (1-Papel, 2-Rocha, 3-Tesoura): ")
    
   # Caso de empate
    elif jogador1 == "1" and jogador2 == 1:
        print("Empate,  jogue novamente")
        jogador2 = random.randint(1, 3)
        jogador1 = input("Digite a opção desejada (1-Papel, 2-Rocha, 3-Tesoura): ")
    elif jogador1 == "2" and jogador2 == 2:
        print("Empate,  jogue novamente")
        jogador2 = random.randint(1, 3)
        jogador1 = input("Digite a opção desejada (1-Papel, 2-Rocha, 3-Tesoura): ")
    elif jogador1 == "3" and jogador2 == 3:
        print("Empate, jogue novamente")
        jogador2 = random.randint(1, 3)
        jogador1 = input("Digite a opção desejada (1-Papel, 2-Rocha, 3-Tesoura): ") 
        


print("Parabens!")
    