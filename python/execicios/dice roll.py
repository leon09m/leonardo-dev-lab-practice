import random

dice1 = random.randint(1, 3)
dice2 = random.randint(1, 3)

print("dice1:", dice1)
print("dice2:", dice2)
print("total:" , dice1 + dice2)

#Andar

if dice1 + dice2 in [1, 2, 3]:
    print("Andar para frente    1 a 3 casas")
else:
    print("Andar para frente    4 a 6 casas")
