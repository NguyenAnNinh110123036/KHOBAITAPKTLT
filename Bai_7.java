import java.util.Scanner;
public class Bai_7 {

	public static void main(String[] args) {
		Scanner mp =  new Scanner(System. in);
		System.out.println("Moi ban nhap n: ");
		int n = mp.nextInt();
		int[] arr = new int[n];
		System.out.print("Nhap cac phan tu:\n ");
		for(int i=0; i<n; i++)
		{
			System.out.print("arr["+i+"] = ");
			arr[i] = mp.nextInt();
		}
		System.out.print("Cac so chan trong mang la:\n");
		for(int i=0; i<n; i++)
	{
				
		if( arr[i] % 2 == 0 || arr[i] == 2)
			System.out.print(arr[i] + " ");
	}
		mp.close();
	}
	

}
