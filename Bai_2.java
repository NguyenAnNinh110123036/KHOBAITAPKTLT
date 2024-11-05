import java.util.Scanner;
public class Bai_2 {

	public static void main(String[] args) {
		Scanner nn =  new Scanner(System. in);
		System.out.println("Moi ban nhap a: ");
		int a = nn.nextInt();
		System.out.println("Moi ban nhap b: ");
		int b = nn.nextInt();
		float x = 0;
		if( a != 0 && b != 0)
		{
			x = (float) -b/a;
			System.out.print("PT co nghiem la: " +x);
		}
		else if( a== 0 && b!=0)
		{
			System.out.print("Vo nghiem");
		}
		else if( a== 0 && b==0)
		{
			System.out.print("Vo so nghiem");
		}
		nn.close();

	}

}
