import java.util.Scanner;
public class Bai_5 {

	public static void main(String[] args) {
		Scanner nn =  new Scanner(System. in);
		System.out.println("a: ");
		int a = nn.nextInt();
		System.out.println("b: ");
		int b = nn.nextInt();
		System.out.println(" c: ");
		int c = nn.nextInt();
		nn.close();
		float delta, x1 = 0, x2 = 0;
		if(a != 0)
		{
			delta = (b*b)-(4*a*c);
			if(delta > 0)
			{
				x1 = (float)((-b+Math.sqrt(delta))/(2*a));
				x2 = (float)((-b-Math.sqrt(delta))/(2*a));
			}
		}
		System.out.println(x1);
		System.out.println(x2);
	}

}
