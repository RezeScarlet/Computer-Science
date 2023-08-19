import java.util.Scanner;
public class Ex1002 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        double R = sc.nextDouble();
        double pi = 3.14159;
        System.out.printf("A=%.4f", pi*(R*R));
        System.out.println("");
        
				sc.close();
    }
}