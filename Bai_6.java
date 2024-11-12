
import java.util.Scanner;
public class Bai_6 {

	public static void main(String[] args) {
		Scanner m1 =  new Scanner(System. in);
		System.out.println("Moi ban nhap n: ");
		int n = m1.nextInt();
		int[] arr = new int[n];
		System.out.print("Nhap cac phan tu:\n ");
		for(int i=0; i<n; i++)
		{
			System.out.print("arr["+i+"] = ");
			arr[i] = m1.nextInt();
		}	
		
		int max = 0;
			for(int i=0; i<n; i++)
		{
			if( arr[i] > max)
				max = arr[i];
		}
		System.out.println("SLN trong mang la: " +max);		
m1.close();
	}		
}
