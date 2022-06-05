import java.util.Scanner;

public class Program {
	
	public static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		
		char loop='S';
		
		do {
			System.out.println("=======================");
			System.out.println("|     Calculadora     |");
			System.out.println("=======================");
			System.out.println("|1-      Somar        |");
			System.out.println("|2-    Subtrair       |");
			System.out.println("|3-   Multiplicar     |");
			System.out.println("|4-     Dividir       |");
			System.out.println("|5-      Sair         |");
			System.out.println("=======================");
			System.out.println("Informe o número da operação que deseja realizar:");
			
			try {
				switch (sc.nextInt()) {
					case 1: fazOperacao("+"); break;
					case 2: fazOperacao("-"); break;
					case 3:	fazOperacao("*"); break;
					case 4:	fazOperacao("/"); break;
					case 5:	
						loop='n';
						continue;
					default: 
						System.out.println("Selecione uma operação válida.\n");
						continue;
				}
			} catch (Exception e) {
				System.out.println("Valor não aceito");
				break;
			}
			
			System.out.println("\nDeseja fazer outra operação? (S/N)");
			loop = sc.next().charAt(0);
			
		} while(loop == 'S' || loop == 's');

		System.out.println("\nPrograma encerrado.");
	}
	
	static void fazOperacao(String simb) {
		System.out.println("Insira os valores:");
		double n1 = sc.nextDouble();
		System.out.println(simb);
		double n2 = sc.nextDouble();
		System.out.println("=");
		
		if(simb == "+")
			System.out.println(n1+n2);
		else if(simb == "-")
			System.out.println(n1-n2);
		else if(simb == "*")
			System.out.println(n1*n2);
		else 
			System.out.println(n1/n2);
	}
}
