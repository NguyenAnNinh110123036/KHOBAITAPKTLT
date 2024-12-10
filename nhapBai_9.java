package B1;
import java.util.Scanner;
public class nhapBai_9 {
	private int B;
	
	
	
		
Scanner mm =  new Scanner(System. in);
	public  void nhap() {	
		System.out.println("Moi ban nhap so can kiem tra: ");
		B = mm.nextInt();		
		int A=0, B2;
		B2 = B;
		while(B != 0)
		{
			int E = B % 10;
			A = A * 10 + E;
			B /= 10;
		}
		if(A == B2)
		{
			System.out.print(B2+ " la so doi xung");
		}
		else
		{
			System.out.print(B2+ " khong la so doi xung");
		}
		
	}		
}


