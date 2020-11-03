def soma():
    r=1
    while r>0:
        n1 = int(input("Valor: "))
        n2 = int(input(f"{n1} + "))
        soma = n1 + n2
        print(f"\n{n1} + {n2} = {soma}\n")
        r=int(input("1-Continuar 0-Sair: "))
        if r > 1:
            print("Opção Inválida!....Saindo")
            r=0
def sub():
    r = 1
    while r > 0:
        n1 = int(input("Valor: "))
        n2 = int(input(f"{n1} - "))
        sub = n1 - n2
        print(f"\n{n1} - {n2} = {sub}\n")
        r = int(input("1-Continuar 0-Sair: "))
        if r > 1:
            print("Opção Inválida!....Saindo")
            r = 0
def mult():
    r = 1
    while r > 0:
        n1 = int(input("Valor: "))
        n2 = int(input(f"{n1} X "))
        mult = n1 * n2
        print(f"\n{n1} X {n2} = {mult}\n")
        r = int(input("1-Continuar 0-Sair: "))
        if r > 1:
            print("Opção Inválida!....Saindo")
            r = 0
def div():
    r = 1
    while r > 0:
        n1 = int(input("Valor: "))
        n2 = int(input(f"{n1}/ "))
        if n2 == 0:
            print("Não existe divisão por 0! ")
            break
        div = n1 / n2
        print("\n{} / {} = {:.2f}\n".format(n1, n2, div))
        r = int(input("1-Continuar 0-Sair: "))
        if r > 1:
            print("Opção Inválida!....Saindo")
            r = 0
def raiz():
    import math
    r = 1
    while r > 0:
        n = int(input("Digite o valor: "))
        if n < 0:
            print("Não existe raiz de números negativos!")
            break
        raiz = math.sqrt(n)
        print("\nRaiz de {} = {:.2f}\n".format(n, raiz))
        r = int(input("1-Continuar 0-Sair: "))
        if r > 1:
            print("Opção Inválida!....Saindo")
            r = 0
def sct():
    import math
    r = 1
    while r > 0:
        n = float(input("Digite o valor: "))
        seno = math.sin(math.radians(n))
        cosseno = math.cos(math.radians(n))
        tang = math.tan(math.radians(n))
        print("\nO valor {} possui Seno = {:.2f}, Cosseno = {:.2f} e Tangente = {:.2f}\n".format(n, seno, cosseno, tang))
        r = int(input("1-Continuar 0-Sair: "))
        if r > 1:
            print("Opção Inválida!....Saindo")
            r = 0
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
    6 - Seno, Cosseno, Tangente
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
        raiz()
    elif op == 6:
        sct()
    elif op == 0:
        break
    else:
        print("Opção inválida!")