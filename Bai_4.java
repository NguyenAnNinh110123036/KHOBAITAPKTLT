import java.util.Scanner;
public class Bai_4 {

	public static void main(String[] args) {
		
		Scanner p =  new Scanner(System. in);
		System.out.println("Moi ban nhap N: ");
		int N = p.nextInt();
		p.close();
int giaithua = 1;
if(N <= 1)
{
	System.out.println("Nhap lai");
}else
{
	for(int i=2; i<=N; i++)
	{
		giaithua*=i;
	}
}
System.out.println(N+" giai thua la: " +giaithua);
	}

}
