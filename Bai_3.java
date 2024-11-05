import java.util.Scanner;
public class Bai_3 {

	public static void main(String[] args) {
		Scanner n =  new Scanner(System. in);
		System.out.println("Moi ban nhap N: ");
		int N = n.nextInt();
		n.close();
		if(N < 2){
			System.out.print("NHAP LAI N ");
		}
		
		int chia;
		boolean x = true;
		for(int i=2; i<= ((float)Math.sqrt(N)); i++)
				{
			chia = N%i;
			if(chia==0)
			{
				x = false;
				break;
			}
				}
		if(x)
		{
			System.out.print(N+ " la SNT ");
		}
		else
		{
			System.out.print(N+" khong la SNT ");
		}
				
			
			

	}

}
