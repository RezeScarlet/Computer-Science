import java.util.Scanner;

public class Ex1048 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		double salary = sc.nextDouble();	
		int increase;
		
		if (salary <= 400) {
			increase = 15;

		} else if (salary <= 800) {
			increase = 12;
		
		} else if (salary <= 1200) {
			increase = 10;

		} else if (salary <= 2000) {
			increase = 7;
		} else {
			increase = 4;
		}

		double amount = salary * increase / 100;
		double newSalary = salary + amount;
		System.out.printf("Novo salario: %.2f\n", newSalary);
		System.out.printf("Reajuste ganho: %.2f\n", amount);
		System.out.println("Em percentual: " + increase + " %");


		
		sc.close();
	}
}