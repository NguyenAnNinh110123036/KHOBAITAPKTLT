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
int nhapmang(int a[], int &n, int &i)
{
	for(int i=0; i<n; i++)
	if( i < n)
	{
		printf("\t a[%d]= ", i);
		scanf("%d", &a[i]);
		return  nhapmang(a, n, i);
	}
	else
	{
		return 0;
	}
		
}
int xuatmang(int a[], int n, int i)
{
	if( i == n)
	{
		return 0;
	}
	else
	{
	printf("%5d", a[i]);
	return xuatmang(a, n, i);
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
	//
	printf("\nNhap so luong phan tu cua mang: ");
	scanf("%d", &i);
	printf("Mang vua nhap:", nhapmang(a, n, i));
	printf("\nMang sau khi nhap la:%d \n", xuatmang(a, n, i));
	return 0;
	
}

