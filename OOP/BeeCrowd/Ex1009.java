import java.util.Scanner;

public class Ex1009 {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		String name = sc.next();
		double salary = sc.nextDouble();
		double sales = sc.nextDouble();

		double total = salary + (sales * 0.15);
		System.out.printf("TOTAL = R$ %.2f", total);
		System.out.println();

		sc.close();
	}
}