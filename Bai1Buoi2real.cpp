#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang (int a[], int &n)
{
	printf("\n ======NHAP MANG====== \n");
	printf("\n Mang vua nhap :");
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
	printf("\n Nhap mang a[%d]:", i);
	scanf("%d", &a[i]);
	}
}
void xuatmang (int a[], int &n)
	{
	for(int i=0; i<n; i++)
	printf("%4d", a[i]);
	}
int max(int a[], int &n)
{
	printf("\n ======SO LON NHAT====== \n");
	printf("\n Max = %d", max(a, n));
	int max = a[0], i;
	for(int i=1; i<n; i++)
	if (max < a[i])
	max=a[i];
	return max;
}
int tich (int a[], int &n)
{
	printf("\n ======TICH CAC PHAN TU====== \n");
	printf("\n Tich = %d", tich(a, n));
	int i, tich=1;
	for(int i=0; i<n; i++)
	tich=tich*a[i];
	return tich;
}
int KiemTraSNT (int n)
{
	if (n<2)
	return 0;
	for (int i=2; i <= sqrt ((float)n); i++)
	{
		if (n%i==0)
		{
		return 0;
		}
	}
return 1;
}
int DemSNT (int a[], int &n)
{
	printf("\n ======DEM VA TINH TONG SNT====== \n");
	printf("\n Mang co %d so nguyen to ", DemSNT(a, n));
	int b=0;
	for(int i=0; i<n; i++)
	{
		if(KiemTraSNT(a[i]))
		{
			b++;
		}
	}
	return b;
}
int tongSNT(int a[], int &n)
{
	printf("\n Tong SNT la = %d", tongSNT(a, n));
	printf("\n ======NHAP X IN GIA TRI BANG X====== \n");
	int c=0;
	for(int i=0; i<n; i++)
	{
		if(KiemTraSNT(a[i]))
		{
			c=c+a[i];
		}
	}
	return c;
}
void VTGiaTriBangX(int a[], int &n, int x)
{
	printf("\n");
	printf("\n Nhap so x la = ");
	scanf("%d", &x);
int j=0;
for(int i=0; i<n; i++)
{
	if(x==a[i])
	{
	printf("\n Tim thay x tai vi tri thu %d", i++);
	printf("\n");
	}
	else
	j++;
}
if( j == n)
{

	printf("\n Khong tim thay ");
	printf("\n");
}
}
void sapxep(int a[], int &n)
{	
	printf("\n ======SAP XEP====== \n");
	int sx;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
			sx=a[i];
			a[i]=a[j];
			a[j]=sx;	
			}
		}
	}
	printf("\n Mang da sap xep tang dan la ");
	for(int i=0; i<n; i++)
	{
		printf("%5d", a[i]);
	}
}
void chen(int a[], int &n, int &x, int &k)
{
	printf("\n ======CHEN====== \n");
	printf("\n Nhap vi tri chen :");
	scanf("%d", &k);
	printf("\n Nhap so muon chen :");
	scanf("%d", &x);
	for(int i=n; i>=k; i--)
	{
		a[i]=a[i-1];
	}
	a[k-1]=x;
	n++;
}

int main()
{
	int a[1000], n, b, x, k;
	nhapmang (a, n);
	xuatmang (a, n);	
	VTGiaTriBangX(a, n, x);
	sapxep(a, n);
	chen(a, n, x, k);
	xuatmang (a, n);
	getch();
}

