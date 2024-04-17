import java.util.Scanner;

public class Ex1020 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int totalDays = sc.nextInt();
		
		int years = totalDays/365;
		totalDays -= years*365;
		int months = totalDays/30;
		totalDays -= months*30;
		int days = totalDays;

		System.out.printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

		sc.close();
	}
}