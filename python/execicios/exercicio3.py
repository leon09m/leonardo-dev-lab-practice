nome = input("Digite seu nome: Leonardo")
nome = "Leonardo" 


idade = input("Digite sua idade: 18")   
idade = idade.strip()   # Remove espaços extras
idade = int(18) 

altura = input("Digite sua altura: 1.78")
altura = float(1.78) 

print("----- RESULTADO -----")
print("Nome:", nome)
print("Idade:", idade)
print("Ano que vem você terá", idade + 1, "anos")
print("Altura:", altura,)

