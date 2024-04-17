import java.util.Scanner;

public class Ex1018 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int money = sc.nextInt();
		int initialMoney = money;
		
		int hundred = money/100;
		money -= hundred*100;
		int fifty = money/50;
		money -= fifty*50;
		int twenty = money/20;
		money -= twenty*20;
		int ten = money/10;
		money -= ten*10;
		int five = money/5;
		money -= five*5;
		int two = money/2;
		money -= two*2;
		int one = money;

		System.out.printf("%d\n" +
				"%d nota(s) de R$ 100,00\n" +
				"%d nota(s) de R$ 50,00\n" +
				"%d nota(s) de R$ 20,00\n" + 
				"%d nota(s) de R$ 10,00\n" +
				"%d nota(s) de R$ 5,00\n" + 
				"%d nota(s) de R$ 2,00\n" + 
				"%d nota(s) de R$ 1,00\n", initialMoney, hundred, fifty, twenty, ten, five, two, one);

		sc.close();
	}
}