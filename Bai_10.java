import java.util.Scanner;
public class Bai_10 {

	public static void main(String[] args) {
		Scanner mu =  new Scanner(System. in);
		
		System.out.println("Moi ban nhap m: ");
			int m = mu.nextInt();
			System.out.println("Moi ban nhap mu n: ");
			int n = mu.nextInt();
		mu.close();
		int kq = 1;
		for(int i = 1; i<=n; i++)
		{
			kq *= m;
		}
		System.out.print(" " +m+ " mu " +n+ " la: " +kq);
	}

}
