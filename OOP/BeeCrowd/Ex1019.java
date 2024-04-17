import java.util.Scanner;

public class Ex1019 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int totalSeconds = sc.nextInt();
		
		int hours = totalSeconds/3600;
		totalSeconds -= hours*3600;
		int minutes = totalSeconds/60;
		totalSeconds -= minutes*60;
		int seconds = totalSeconds;

		System.out.printf("%d:%d:%d\n", hours, minutes, seconds);

		sc.close();
	}
}