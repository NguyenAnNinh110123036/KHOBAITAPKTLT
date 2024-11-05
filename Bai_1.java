
import java.util.Scanner;
public class Bai_1 {

	public static void main(String[] args) {
		Scanner sc =  new Scanner(System. in);
		System.out.println("Moi ban nhap a: ");
		int a = sc.nextInt();
		System.out.println("Moi ban nhap b: ");
		int b = sc.nextInt();
		if(a>b || a == b)
		{
			System.out.print("So lon hon la " +a);
		}
		else
		{
			System.out.print("So lon hon la " +b);
		}
		sc.close();
	}

}
