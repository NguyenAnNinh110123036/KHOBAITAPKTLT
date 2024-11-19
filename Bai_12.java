import java.util.Scanner;
public class Bai_12 {

	public static void main(String[] args) {
		Scanner sumgt =  new Scanner(System. in);
		System.out.println("Moi ban nhap N: ");
			int N = sumgt.nextInt();
			sumgt.close();
			int sum = 0;
			int gt = 1;
			for(int i = 1; i<=N; i++)
			{
				gt *=i;
				sum +=gt;
			}
			
			System.out.print("Tong cac so la: " +sum);
	}

}
