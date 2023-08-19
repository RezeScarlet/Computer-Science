import java.util.Scanner;

public class Ex1011 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		double R = sc.nextDouble();
		double volume = (4/3.0) * 3.14159 * (R * R * R);

		System.out.printf("VOLUME = %.3f\n", volume);
		sc.close();
	}
}
