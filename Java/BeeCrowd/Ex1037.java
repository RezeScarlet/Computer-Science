import java.util.Scanner;

public class Ex1037 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		double A = sc.nextDouble();

		if (A < 0 || A > 100) {
			System.out.println("Fora de intervalo");
			
		} else {
			System.out.print("Intervalo ");
			if (A <= 25) {
				System.out.println("[0,25]");

			}
			if (A > 25 && A <= 50) {
				System.out.println("(25,50]");

			}
			if (A > 50 && A <= 75) {
				System.out.println("(50,75]");

			}
			if (A > 75 && A <= 100) {
				System.out.println("(75,100]");

			}
		}
		sc.close();
	}
}