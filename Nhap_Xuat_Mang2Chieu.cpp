#include"stdio.h"
int a[100][100], m, n;
void nhapmatran(int x[100][100], int &m, int &n)
{
	do
	{
		printf("Nhap m va n: ");
		scanf("%d%d", &m, &n);
	}while( m<=0 || n<=0);
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("x[%d][%d]= ", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatmatran(int x[100][100], int m, int n)
{
	printf("\nMang da nhap la: \n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d\t", x[i][j]);
		}
		printf("\n");
	}
	
}
int timkiem(int x[100][100], int m, int n, int gtt)
{
	int kq = 0;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(x[i][j] == gtt)
			kq = 1;
		}
	}
	return kq;
}
void tk(int x[100][100], int m, int n)
{
	int luachon = 0;
	do
	{
		int gtt;
		printf("Nhap gia tri can tim: ");
		scanf("%d", &gtt);
		int kq = timkiem(x, m, n, gtt);
		if(kq)
		{
		printf("\nTim thay");
		}else{
		printf("\nKhong tim thay");
	}
	printf("\nNhan phim bat ki de tiep tuc");
	printf("\nAn 0 de thoat\n");
	scanf("%d", &luachon);
	}while(luachon!=0);
	
}
int main()
{
	
	nhapmatran(a, m, n);
	xuatmatran(a, m, n);
	tk(a, m, n);
}
