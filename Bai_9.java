import java.util.Scanner;
public class Bai_9 {

	public static boolean SNT(int n)
	{
		if(n  <= 1)
			return false;
		for(int i =2; i <= Math.sqrt(n); i++)
		{
			if( n % i == 0)
			
				return false;
		}
			return true;		
	}
	public static void main(String[] args) {
		Scanner mq =  new Scanner(System. in);
			
		System.out.println("Moi ban nhap M: ");
			int M = mq.nextInt();
			System.out.println("Moi ban nhap N: ");
			int N = mq.nextInt();
		mq.close();               
		for(int i = M; i <= N; i++)
		{
			if(SNT(i))
			{
				System.out.print(i);
			}			
		}					
	}
}




