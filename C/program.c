#include <stdio.h>

void fazOperacao(char simb) {
  float n1=0, n2=0;
  
  printf("Insira os valores:");
  
  scanf("%f", &n1);
  printf("%c", simb);
  scanf("%f", &n2);
  
  printf("=");
  
  if(simb == '+')
    printf("%.2f", n1+n2);
  else if(simb == '-')
    printf("%.2f", n1-n2);
  else if(simb == '*')
    printf("%.2f", n1*n2);
  else 
    printf("%.2f", n1/n2);
}

int main(void) {
  char loop='S';

  do {
    printf("=======================");
    printf("\n|     Calculadora     |");
    printf("\n=======================");
    printf("\n|1-      Somar        |");
    printf("\n|2-    Subtrair       |");
    printf("\n|3-   Multiplicar     |");
    printf("\n|4-     Dividir       |");
    printf("\n|5-      Sair         |");
    printf("\n=======================");
    printf("\nInforme o número da operação que deseja realizar:");

    int op;
    scanf("%d", &op);
    
    switch (op) {
      case 1: fazOperacao('+'); break;
      case 2: fazOperacao('-'); break;
      case 3:	fazOperacao('*'); break;
      case 4:	fazOperacao('/'); break;
      case 5:	
          loop='n';
          continue;
      default: 
          printf("Selecione uma operação válida.\n");
          continue;
    }

    printf("\nDeseja fazer outra operação? (S/N)");
    scanf("%s", &loop);
    
  } while(loop == 'S' || loop == 's');

  printf("\nPrograma encerrado.");
  
  return 0;
}