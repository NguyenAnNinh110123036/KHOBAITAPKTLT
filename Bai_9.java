import java.util.Scanner;
public class Bai_9 {

	public static void main(String[] args) {
		Scanner mq =  new Scanner(System. in);
		System.out.println("Moi ban nhap M: ");
		int M = mq.nextInt();
		System.out.println("Moi ban nhap N: ");
		int N = mq.nextInt();
		
		int ch;
		boolean x = true;
		for(int i=M; i<N; i++)
		{
			for(int j=2; i<= ((float)Math.sqrt(i)); j++)
			{
				ch = i % j;
			
		
		
			System.out.print(i);
		
		
		
			//System.out.print(N+" khong la SNT ");
		
			}
			
		}
		
		
	}

}


