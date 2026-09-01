import random
from sre_constants import IN

palavras = ["python", "programacao", "desenvolvimento", "computador", "tecnologia"]

palavra = random.choice(palavras)
letras_descobertas = ["_"]  * len(palavra)
tentativas = 6
letras_chutadas = []

print("=== Jogo da Forca ===")

while tentativas > 0 and "_" in letras_descobertas:

    print("\nPalavra: ", " ".join(letras_descobertas))
    print("Tentativas restantes: ", tentativas)
    print("letras já usadas: ", " ".join(letras_chutadas))

    letra = input("Digite uma letra: ").lower()

    escolha = input("Deseja chutar a palavra? (s/n): ").lower()

    # Chutar uma letra
    if escolha == "n":
        if len(letra) != 1 or not letra.isalpha():
            print("Por favor, digite apenas uma letra.")
            continue

        if letra in letras_chutadas:
            print("Você já chutou essa letra. Tente outra.")
            continue

        letras_chutadas.append(letra)
        
        if letra in palavra:
            print("Acertou!")
            
            for i in range(len(palavra)):
                if palavra[i] == letra:
                    letras_descobertas[i] = letra
        else:
            print("Errou!")
            tentativas -= 1
            
    # Chutar a palavra
    elif escolha == "s":
        chute = input("Digite a palavra: ").lower()
        
        if chute == palavra:
            letras_descobertas = list(palavra)
            break
        else:
            print("Errou!")
            tentativas -= 1

else:
    print("Escolha n para letra ou s para palavra")

if "_" not in letras_descobertas:
    print("\nParabéns! Você ganhou!")
    print("A palavra era:", palavra)    
else:
    print("\nVocê perdeu! A palavra era:", palavra)    

