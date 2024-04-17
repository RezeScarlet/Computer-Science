import java.util.Scanner;

public class Ex1021 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Double money = sc.nextDouble();
		int cents = (int) ((money - money.intValue()) * 100);
			
		int hundred = (int) (money/100);
		money -= hundred*100;
		int fifty = (int) (money/50);
		money -= fifty*50;
		int twenty = (int) (money/20);
		money -= twenty*20;
		int ten = (int) (money/10);
		money -= ten*10;
		int five = (int) (money/5);
		money -= five*5;
		int two = (int) (money/2);
		money -= two*2;
		int one = money.intValue();
		money -= one;

		int cent50 = cents/50;
		cents -= cent50*50;
		int cent25 = cents/25;
		cents -= cent25*25;
		int cent10 = cents/10;
		cents -= cent10*10;
		int cent5 = cents/5;
		cents -= cent5*5;

		System.out.printf("NOTAS:\n" +
				"%d nota(s) de R$ 100.00\n" +
				"%d nota(s) de R$ 50.00\n" +
				"%d nota(s) de R$ 20.00\n" + 
				"%d nota(s) de R$ 10.00\n" +
				"%d nota(s) de R$ 5.00\n" + 
				"%d nota(s) de R$ 2.00\n", hundred, fifty, twenty, ten, five, two, one);

		System.out.printf("MOEDAS:\n" +
				"%d moeda(s) de R$ 1.00\n" +
				"%d moeda(s) de R$ 0.50\n" +
				"%d moeda(s) de R$ 0.25\n" + 
				"%d moeda(s) de R$ 0.10\n" +
				"%d moeda(s) de R$ 0.05\n" +  
				"%d moeda(s) de R$ 0.01\n", one, cent50, cent25, cent10, cent5, cents);

		sc.close();
	}
}