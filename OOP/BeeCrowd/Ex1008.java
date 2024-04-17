import java.util.Scanner;

public class Ex1008 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int hours = sc.nextInt();
        double amount = sc.nextDouble();

        double salary = hours * amount;
        System.out.printf("NUMBER = %d\nSALARY = U$ %.2f", number, salary);
        System.out.println();

				sc.close();
    }
}