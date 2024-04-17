import java.util.Scanner;

public class Ex1014 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int X = sc.nextInt();
		double Y = sc.nextDouble();


		System.out.printf("%.3f km/l\n", X/Y);

		sc.close();
	}
}