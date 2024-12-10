package B1;
import java.util.Scanner;
public class Bai_1_NANGCAO {

	public static void main(String[] args) {
		Scanner B1 = new Scanner(System.in);
		System.out.print("Nhap n: ");
		int n = B1.nextInt();
		int [] arr = new int[n];
		
		for(int i = 0; i< n; i++)
		{
			System.out.print("arr[" +i+ "]= ");
			arr[i] = B1.nextInt();
			if(arr[i] == arr[i+1])
				System.out.print(arr[i]);
			
		}
	
		
		B1.close();
	}

}
