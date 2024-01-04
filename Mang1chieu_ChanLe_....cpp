#include"stdio.h"
#include"math.h"
int dieukien(int x)//ham thoa dieu kien
{
	return (x%2==0 && x%3==0);
}
void chiahet3(int a[], int n)
{
	printf("So chan chia het cho 3 la: ");
	for(int i=0; i<n; i++)
	if(dieukien(a[i]))
	{
		printf("%d ", a[i]);
	}
}
int dieukienSNT(int x)//ham dieu kien SNT
{
	if(x < 1)
	{
		return 0;
	}
	for(int i=2; i<=sqrt(x); i++)
	{
		if(x % i==0)
		return 0;
	}
	return 1;
}
void SNT(int a[], int n)
{
	printf("\nSo nguyen to la: ");
	for(int i=0; i<n; i++)
	if(dieukienSNT(a[i]))
	{
		printf("%d ", a[i]);
	}
}
int TimMin(int x[], int n)
{
	int min = x[0];
		for (int i=0; i<n; i++)
		{
			if(min>x[i])
			min = x[i];
		}
			return min;
}
int TimMax(int x[], int n)
{
	int max = x[0];
		for (int i=0; i<n; i++)
		{
			if(max<x[i])
			max = x[i];
		}
			return max;
}
int main()
{
	int a[100], n;
	do
	{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	for(int i=0; i<n; i++)
	{
		printf("\na[%d]=", i);
		scanf("%d", &a[i]);
	}
	//So chan chia het cho 3
	chiahet3(a, n);
	//SNT
	SNT(a, n);
	//Max Min
	printf("\nMin = %d", TimMin(a, n));
	printf("\nMax = %d", TimMax(a, n));
}
