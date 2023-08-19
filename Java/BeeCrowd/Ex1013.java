import java.util.Scanner;

public class Ex1013 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int maior1 = (A + B + Math.abs(A - B))/2;
		int maior2 = (maior1 + C + Math.abs(maior1 - C))/2;

		System.out.printf("%d eh o maior\n", maior2);

		sc.close();
	}
}