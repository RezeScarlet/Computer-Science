import java.util.Scanner;

public class Ex1040 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		float n1 = sc.nextFloat();
		float n2 = sc.nextFloat();
		float n3 = sc.nextFloat();
		float n4 = sc.nextFloat();
		float media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10.0f;

		System.out.printf("Media: %.1f\n", media);

		if (media >= 7.0) {
			System.out.println("Aluno aprovado.");
		} else if (media < 5.0) {
			System.out.println("Aluno reprovado.");
		} else {
			float exame = sc.nextFloat();
			System.out.println("Aluno em exame.\nNota do exame: " + exame);
			media = (media + exame) / 2.0f;
			if (media >= 5.0) {
				System.out.println("Aluno aprovado.");
			} else {
				System.out.println("Aluno reprovado.");
			}
			System.out.printf("Media final: %.1f\n", media);

		}
		
		sc.close();
	}
}