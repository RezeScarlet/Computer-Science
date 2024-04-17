import java.util.Scanner;

public class Ex1036 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		double A = sc.nextDouble();
		double B = sc.nextDouble();
		double C = sc.nextDouble();
		double delta = (Math.pow(B, 2)) - (4 * A * C);
		if (delta < 0 || 2 * A == 0) {
			System.out.println("Impossivel calcular");
			
		} else {
			double x1 = (-B + Math.sqrt(delta)) / (2 * A);
			double x2 = (-B - Math.sqrt(delta)) / (2 * A);
		
			System.out.printf("R1 = %.5f\nR2 = %.5f\n", x1, x2);

		}
		sc.close();
	}
}