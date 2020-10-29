def soma():
    n1 = int(input("Valor: "))
    n2 = int(input(f"{n1} + "))
    soma = n1 + n2
    print(f"{n1} + {n2} = {soma}")
def sub():
    n1 = int(input("Valor: "))
    n2 = int(input(f"{n1} - "))
    sub = n1 - n2
    print(f"{n1} - {n2} = {sub}")
def mult():
    n1 = int(input("Valor: "))
    n2 = int(input(f"{n1} X "))
    mult = n1 * n2
    print(f"{n1} X {n2} = {mult}")
def div():
    n1 = int(input("Valor: "))
    n2 = int(input(f"{n1}/ "))
    div = n1 / n2
    print("{} / {} = {:.2f}".format(n1,n2,div))





print("""
-------------CALCULADORA--------------
-----------Pablo--Vinícius------------
""")
corpo=True
while corpo == True:
    print("""
                  MENU
    1 - Soma
    2 - Subtração
    3 - Multiplicação
    4 - Divisão
    5 - Raiz Quadrada
    6 - Seno
    7 - Cosseno
    8 - Tangente
    0 - Sair
    """)

    op = int(input("Escolha a operação: "))

    if op == 1:
        soma()
    elif op == 2:
        sub()
    elif op == 3:
        mult()
    elif op == 4:
        div()
    elif op == 5:
        print("kasjk")
    elif op == 6:
        print("kasjk")
    elif op == 7:
        print("kasjk")
    elif op == 8:
        print("kasjk")
    elif op == 0:
        break
    else:
        print("Opção inválida!")