#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang (int a[], int &n);
void xuatmang (int a[], int &n);
int max(int a[], int &n);
int tich (int a[], int &n);
int KiemTraSNT (int n);
int DemSNT (int a[], int &n);
int tongSNT(int a[], int &n);
void VTGiaTriBangX(int a[], int &n, int x);
void sapxep(int a[], int &n);
void chen(int a[], int n, int x, int k);
int main()
{
	int a[1000], n, b, x, k;
	printf("\n ======NHAP MANG====== \n");
	printf("\n Mang vua nhap :");
	scanf("%d", &n);
	nhapmang (a, n);
	xuatmang (a, n);
	printf("\n ======SO LON NHAT====== \n");
	printf("\n Max = %d", max(a, n));
	printf("\n ======TICH CAC PHAN TU====== \n");
	printf("\n Tich = %d", tich(a, n));
	printf("\n ======DEM VA TINH TONG SNT====== \n");
	printf("\n Mang co %d so nguyen to ", DemSNT(a, n));
	printf("\n Tong SNT la = %d", tongSNT(a, n));
	printf("\n ======NHAP X IN GIA TRI BANG X====== \n");
	printf("\n Nhap so x la = ");
	scanf("%d", &x);
	VTGiaTriBangX(a, n, x);
	printf("\n ======SAP XEP====== \n");
	sapxep(a, n);
	printf("\n ======CHEN====== \n");
	printf("\n Nhap vi tri chen :");
	scanf("%d", &k);
	printf("\n Nhap so muon chen :");
	scanf("%d", &x);
	chen(a, n, x, k);
	getch();
}
void nhapmang (int a[], int &n)
{
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
	int max = a[0], i;
	for(int i=1; i<n; i++)
	if (max < a[i])
	max=a[i];
	return max;
}
int tich (int a[], int &n)
{
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
int j=0;
for(int i=0; i<n; i++)
{
	if(x==a[i])
	{
	printf("\n Tim thay x tai vi tri thu %d", i++);	
	}
	else
	j++;
}
if( j == n)
{

	printf("\n Khong tim thay ");
}
}
void sapxep(int a[], int &n)
{
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
void chen(int a[], int n, int x, int k)
{
	for(int i=n-1; i>=k-1; i--)
	a[i+1]=a[i];
	a[k-1]=x;
	printf("\n Mang sau khi chen ");
	{
	for (int i=0; i<=n; i++)
	printf("\n a[%d] = %d ", i, a[i]);
}
}


