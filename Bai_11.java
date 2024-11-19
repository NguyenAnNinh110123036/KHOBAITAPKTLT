import java.util.Scanner;
public class Bai_11 {

	public static void main(String[] args) {
		Scanner le =  new Scanner(System. in);
		System.out.println("Moi ban nhap N: ");
			int N = le.nextInt();
			le.close();
			int sum = 0;
			for(int i = 1; i<=N; i = i + 2)
			{
				sum += i;
			}
			System.out.print("Tong cac so le la: " +sum);

	}

}
