package B1;
import java.util.Scanner;
public class Bai_8_NANGCAO {
	
	
	public static void main(String[] args) {
		Scanner me =  new Scanner(System. in);
		System.out.println("Moi ban nhap so: ");
		int b = me.nextInt();		
		int A=0, B2;
		B2 = b;
		while(b != 0)
		{
			int E = b % 10;
			A = A * 10 + E;
			b /= 10;
		}
		System.out.print("KQ:  " +A);
		

	}

}
