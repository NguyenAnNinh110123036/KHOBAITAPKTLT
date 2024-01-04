#include"stdio.h"
int main()
{
	int a[100], n;
	do
	{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	//Nhap
	for(int i=0; i<n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	//xuat
	printf("Mang da nhap la:\n");
	for(int i=0; i<n; i++)
	{
		printf("\t%d", a[i]);	
	}
	//tinh tong
	int tong = 0;
	for(int i=0; i<n; i++)
	{
		tong+=a[i];
	}
	printf("\nTong la: %d", tong);
}

