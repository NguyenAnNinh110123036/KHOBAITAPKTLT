#include<stdio.h>
#include<conio.h>
#include<string.h>
//Yeu cau 1:su dung de quy tim 10 so dau tien Fibonacci
int fibonacci(int n)
{
	if(n < 0)
	{ 
			return -1;	
	}
	else if(n == 0 || n == 1)
	{
		return n;
	}
		else
		{
			return fibonacci(n-1) + fibonacci(n-2);
		}	
}
// Yeu cau 2: su dung de quy tinh giai thua cua mot so nguyen duong nhap tu ban phim
long tinhgt(int n)
{
	if( n > 0)
	{
		return n * tinhgt(n - 1);
	}
		else
			{ 
			return 1;
			}
}
//
int tongM(int m)
{
	int tt;
	if( m == 1)
	{
		return 1;
	}
		else
			{
				tt = m + tongM( m - 1);
			}
			return tt;
}
//Yeu cau 4: Nhap xuat mang 1 chieu
void nhapmang(int a[], int n)
{
	
	if( n == 0)
	{
		return ;
	}
	else 
	{
		nhapmang(a, n-1);
		printf("\n Nhap phan tu thu a[%d]= ", n-1);
		scanf("%d", &a[n-1]);

	}
		
}
void xuatmang(int a[], int n)
{
	if( n == 0)
	{
		return ;
	}
	else
	{
		xuatmang(a, n-1);
		printf("%4d", a[n-1]);
	
	}

}
int main()
{
	//Yeu cau 1
	int i, n, m,  a[1000], tinhtongM;
	printf("10 so dau tien day so Fibonacci: \n");
		for( i=0; i<10; i++)
			{
				printf("%d",fibonacci(i));
				printf("\t");
			}
			//Yeu cau 2
	printf("\nNhap so nguyen duong n: ");
	scanf("%d", &n);
	printf("\nGiai thua cua %d la: %d \n", n, tinhgt(n));
	//Yeu cau 3
	printf("\nNhap mot so nguyen duong: ");
	scanf("%d", &m);
	tinhtongM  = tongM(m);
	printf("\nTong cac so tu 1 toi %d la: %d", m, tinhtongM);
	//Yeu cau 4
	printf("\nNhap so luong phan tu cua mang: ");
	scanf("%d", &n);
	nhapmang(a, n);
	xuatmang(a, n);
	return 0;
	
}

