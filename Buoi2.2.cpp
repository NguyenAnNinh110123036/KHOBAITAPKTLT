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
void VTGiaTriBangX(int a[], int &n);
int main()
{
	int a[1000], n, b, x;
	printf("\n Mang vua nhap :");
	scanf("%d", &n);
	nhapmang (a, n);
	xuatmang (a, n);
	printf("\n Max = %d", max(a, n));
	printf("\n Tich = %d", tich(a, n));
	printf("\n Mang co %d so nguyen to ", DemSNT(a, n));
	printf("\n Tong SNT la = %d", tongSNT(a, n));
	printf("\n Nhap so x la = ");
	scanf("%d", &x);
	VTGiaTriBangX(a, n);
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
void VTGiaTriBangX(int a[], int &n)
{
	int i, x;
	for(int i=0; i<n; i++)
	if(a[i]==x)
	{
		printf("\n Vi tri bang x la %3d ", i++);
	}
	else
	{
		printf("\n Khong co vi tri bang x ");
}
}
