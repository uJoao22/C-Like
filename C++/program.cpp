#include <iostream>

void fazOperacao(char simb) {
  double n1, n2;
  std::cout << "Insira os valores:";
  std::cin >> n1;
  std::cout << simb;
  std::cin >> n2;
  std::cout << "=";
  
  if(simb == '+')
    std::cout << n1+n2;
  else if(simb == '-')
    std::cout << n1-n2;
  else if(simb == '*')
    std::cout << n1*n2;
  else 
    std::cout << n1/n2;
}

int main() {
	char loop='S';

  do {
    std::cout << "=======================";
    std::cout << "\n|     Calculadora     |";
    std::cout << "\n=======================";
    std::cout << "\n|1-      Somar        |";
    std::cout << "\n|2-    Subtrair       |";
    std::cout << "\n|3-   Multiplicar     |";
    std::cout << "\n|4-     Dividir       |";
    std::cout << "\n|5-      Sair         |";
    std::cout << "\n=======================";
    std::cout << "\nInforme o número da operação que deseja realizar:";

    int op;
    std::cin >> op;
    switch(op) {
      case 1: fazOperacao('+'); break;
      case 2: fazOperacao('-'); break;
      case 3:	fazOperacao('*'); break;
      case 4:	fazOperacao('/'); break;
      case 5:	
        loop = 'n';
        continue;
      default: 
        std::cout << "Selecione uma operação válida.\n";
        continue;
    }

    std::cout << "\nDeseja fazer outra operação? (S/N)";
		std::cin >> loop;
    
  } while(loop == 'S' || loop == 's');
  
	std::cout << "\nPrograma encerrado.";
}