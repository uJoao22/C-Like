def fazOperacao(simb):
    print("Insira os valores:")
    n1 = float(input())
    print(simb)
    n2 = float(input())
    print("=")

    if simb == "+":
        print(n1+n2)
    elif simb == "-":
        print(n1-n2)
    elif simb == "*":
        print(n1*n2)
    else:
        print(n1/n2)

loop = 'n'

while True:
    print("=======================")
    print("|     Calculadora     |")
    print("=======================")
    print("|1-      Somar        |")
    print("|2-    Subtrair       |")
    print("|3-   Multiplicar     |")
    print("|4-     Dividir       |")
    print("|5-      Sair         |")
    print("=======================")

    try:
        op = int(input("Informe o número da operação que deseja realizar:"))
        if op == 1:
            fazOperacao("+")
        elif op == 2:
            fazOperacao("-")
        elif op == 3:
            fazOperacao("*")
        elif op == 4:
            fazOperacao("/")
        elif op == 5:
            loop = 'n'
            break
        else:
            print("Selecione uma operação válida.\n")
            continue
    except:
        print("Valor não aceito")
        break

    print("\nDeseja fazer outra operação? (S/N)")
    loop = input()

    if loop != 's' and loop != 'S':
        break

print("\nPrograma encerrado.")