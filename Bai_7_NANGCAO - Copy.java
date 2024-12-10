package B1;
import java.util.Scanner;
public class Bai_7_NANGCAO {
	
	public static int tinh(int M, int N)
	{
		while(N != 0)
		{
			int c = M % N;
			M = N;
			N =c;
		}
		return M;		
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Nhap M: ");
		int M = sc.nextInt();
		System.out.print("Nhap N: ");
		int N = sc.nextInt();
		if(M == 0)
		{
			System.out.print("UCLN la: "+N);
		}else if(N ==0)
		{
			System.out.print("UCLN la: " +M);
		}
		System.out.print("UCLN la: " +tinh(M, N));
	}				
}


