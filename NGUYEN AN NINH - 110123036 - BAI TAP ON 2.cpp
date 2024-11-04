#include"stdio.h"
#include"math.h"
void nhapmang(int a[100][100], int &n)
{
	printf("Nhap n chieu cua ma tran vuong: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuatmang(int a[100][100], int &n )
{
	printf("\nMa tran vuong da nhap la:\n");
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			printf("\t%d", a[i][j]);
		}
		printf("\n");
	}
}
void max_x(int a[100][100], int n ,int &x)
{
	printf("\nNhap hang X can tim phan tu MAX: ");
	scanf("%d", &x);
	int max = a[x][1];
	for(int i=2; i<=n; i++)
	{
		if(a[x][i]>max)
		max=a[x][i];
	}
	printf("MAX tren hang %d la: %d", x, max);
}
void min_y(int a[100][100], int n ,int &y)
{
	printf("\nNhap cot Y can tim phan tu MIN: ");
	scanf("%d", &y);
	int min = a[1][y];
	for(int j=2; j<=n; j++)
	{
		if(a[j][y]<min)
		min=a[j][y];
	}
	printf("MIN tren cot %d la: %d", y, min);
}
void tonghang_k(int a[100][100], int n ,int &k)
{
	printf("\nNhap hang K can tinh TONG: ");
	scanf("%d", &k);
	int tong = 0;
	for(int i=1; i<=n; i++)
	{
		tong+=a[k][i];
	}
	printf("TONG tren hang %d la: %d", k, tong);
}
void tongcot_m(int a[100][100], int n ,int &m)
{
	printf("\nNhap cot M can tinh TONG: ");
	scanf("%d", &m);
	int tong = 0;
	for(int j=1; j<=n; j++)
	{
		tong+=a[j][m];
	}
	printf("TONG tren cot %d la: %d", m, tong);
}
void tongchan(int a[100][100], int n)
{
	int tong = 0;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(a[i][j] % 2 == 0)
			{
				tong+=a[i][j];
			}
		}
	}
	printf("\nTONG cac phan tu chan trong ma tran la:  %d", tong);
}
void kiemtraDC(int a[100][100], int n)
{
	int duongcheo = 1;
	for(int i=1; i<=n; i++)
	{
		if(a[i][i] != 0)
		{
			duongcheo = 0;
		}
	}
	if(duongcheo)
	{
		printf("\nDUONG CHEO BANG 0");
	}
	else
	{
		printf("\nDUONG CHEO KHAC 0");
	}
}
void ALLmang_nho_bang_1(int a[100][100], int n)
{
	int e=1;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(a[i][j] > 1)
			{
				e = 0;
		    }
		    
			
		}
	}
			if(e)
			{
				printf("\nYES");
			}
			else
			{
				printf("\nNO");
			}
	
	
}
void doixung(int a[100][100], int n)
{
	int doixung = 1;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(a[i][j] != a[j][i])
			{
				doixung = 0;
			}
		}
	}
	if(doixung)
	{
		printf("\nDOI XUNG");
	}
	else
	{
		printf("\nKHONG DOI XUNG");
	}
}
int main()
{
	int a[100][100], m, k, y, x, n;
	nhapmang(a, n);
	xuatmang(a, n);
	//max_x(a, n, x);
	//min_y(a, n, y);
	//tonghang_k(a, n, k);
	//tongcot_m(a, n, m);
	//tongchan(a, n);
	kiemtraDC(a, n);
	ALLmang_nho_bang_1(a, n);
	doixung(a, n);
}
