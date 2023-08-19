import java.util.Scanner;

public class Ex1042 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int maior = sc.nextInt();
		int medio = sc.nextInt();
		int menor = sc.nextInt();
		
		int n1 = maior;
		int n2 = medio;
		int n3 = menor;

		int troca;
		
		if (medio > maior) {
			troca = maior;
			maior = medio;
			medio = troca;

		}

		if (menor > maior) {
			troca = maior;
			maior = menor;
			menor = troca;

		}

		if (menor > medio) {
			troca = medio;
			medio = menor;
			menor = troca;

		}

		System.out.println(menor + "\n" + medio + "\n" + maior);
		System.out.println("\n" + n1 + "\n" + n2 + "\n" + n3);
		
		
		sc.close();
	}
}