import math as m
a = int(input("Digite o valor de a: "))
b = int(input("Digite o valor de b: "))
c = int(input("Digite o valor de c: "))
d = (b**2)-(4*a*c)
print(d)
if d < 0:
    print("A equação não possui raízes reais.")
else:
    x1 = (-b + m.sqrt(d)) / (2*a)
    print(x1)
    x2 = (-b - m.sqrt(d)) / (2*a)
    print(x2)

