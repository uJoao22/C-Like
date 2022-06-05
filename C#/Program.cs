using System;

namespace MyApp {
    internal class Program {
        static void Main(string[] args) {

            char loop='S';

            do {
                Console.WriteLine("=======================");
                Console.WriteLine("|     Calculadora     |");
                Console.WriteLine("=======================");
                Console.WriteLine("|1-      Somar        |");
                Console.WriteLine("|2-    Subtrair       |");
                Console.WriteLine("|3-   Multiplicar     |");
                Console.WriteLine("|4-     Dividir       |");
                Console.WriteLine("|5-      Sair         |");
                Console.WriteLine("=======================");
                Console.WriteLine("Informe o número da operação que deseja realizar:");

                try {
                    switch (int.Parse(Console.ReadLine())) {
                        case 1: FazOperacao("+"); break;
                        case 2: FazOperacao("-"); break;
                        case 3:	FazOperacao("*"); break;
                        case 4:	FazOperacao("/"); break;
                        case 5:	
                            loop='n';
                            continue;
                        default: 
                            Console.WriteLine("Selecione uma operação válida.\n");
                            continue;
                    }
                } catch (Exception) {
                    Console.WriteLine("Valor não aceito");
                    break;
                }

                Console.WriteLine("\nDeseja fazer outra operação? (S/N)");
                loop = char.Parse(Console.ReadLine());

            } while(loop == 'S' || loop == 's');

		    Console.WriteLine("\nPrograma encerrado.");
        }

        static void FazOperacao(String simb) {
            Console.WriteLine("Insira os valores:");
            double n1 = double.Parse(Console.ReadLine());
            Console.WriteLine(simb);
            double n2 = double.Parse(Console.ReadLine());
            Console.WriteLine("=");
            
            if(simb == "+")
                Console.WriteLine(n1+n2);
            else if(simb == "-")
                Console.WriteLine(n1-n2);
            else if(simb == "*")
                Console.WriteLine(n1*n2);
            else 
                Console.WriteLine(n1/n2);
        }
    }
}