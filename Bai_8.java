import java.util.Scanner;
public class Bai_8 {

	public static void main(String[] args) {
		Scanner mv =  new Scanner(System. in);
		System.out.println("Nhap so: \n");
		
		
		int tong = 0;
		while(true)
		{
			int n = mv.nextInt();
			tong+=n;
			if(n % 4 == 0)
				break;
			
		}
		System.out.print(tong);
		mv.close();
	}

}
