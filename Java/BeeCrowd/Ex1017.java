import java.util.Scanner;

public class Ex1017 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int time = sc.nextInt();
		int speed = sc.nextInt();
		double result = (time*speed)/12.0;
		System.out.printf("%.3f\n", result);

		sc.close();
	}
}