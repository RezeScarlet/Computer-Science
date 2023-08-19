import java.util.Scanner;
public class Ex1005 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        double A = sc.nextDouble();
        double B = sc.nextDouble();
        double MEDIA = ((A*3.5) + (B*7.5)) / 11;
        System.out.printf("MEDIA = %.5f", MEDIA);
        System.out.println();

				sc.close();
    }
}