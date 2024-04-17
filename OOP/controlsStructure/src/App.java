import java.util.Scanner;

public class App {

    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);
        float maiorValorTotal = 0;
        
        
        for (int i = 0; i < 3; i++) {
            
            float valor = 0;
            System.out.print("Produto: ");
            int opcao = scanner.nextInt();
            switch (opcao) {
                case 1:
                    valor = 4;
                    break;
                case 2:
                    valor = 4.5f;
                    break;
                case 3:
                    valor = 5;
                    break;
                case 4:
                    valor = 2;
                    break;
                case 5:
                    valor = 1.5f;
                    break;
                default:
                    break;
            }
            System.out.print("Quantidade: ");
            int quantidade = scanner.nextInt();
            float total = valor * quantidade;

            System.out.println("Valor da compra: " + total);

            if (total > maiorValorTotal) {
                maiorValorTotal = total;
            }
        }
        System.out.println("O maior valor pago foi de " + maiorValorTotal);
        scanner.close();
    }
}
