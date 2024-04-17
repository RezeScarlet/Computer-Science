import java.util.Scanner;

public class Ex1010 {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int code1 = sc.nextInt();
		int amount1 = sc.nextInt();
		double price1 = sc.nextDouble();
		int code2 = sc.nextInt();
		int amount2 = sc.nextInt();
		double price2 = sc.nextDouble();

		double total = amount1 * price1 + amount2 * price2;
		System.out.printf("VALOR A PAGAR: R$ %.2f", total);
		System.out.println();

		sc.close();
	}
}