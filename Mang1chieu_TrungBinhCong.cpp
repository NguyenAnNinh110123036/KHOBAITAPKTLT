#include"stdio.h"
float trungbinhcong(int x[], int n)
{
	int tong = 0;
	for(int i=0; i<n; i++)
	{
		tong+=x[i];
	}
	return (float)tong/n;
}
float tbcsoduong(int x[], int n)
{
	int tong = 0;
	int slsoduong = 0;
	for(int i=0; i<n; i++)
	{
		if(x[i] >= 0)
		{
			tong+=x[i];
			slsoduong++;
		}
	}
	return slsoduong>0?(float)tong/slsoduong:-1;
}
int main()
{
	int a[100], n;
	do
	{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d", &n);
	}while( n<1 || n>100);
	for(int i=0; i<n; i++)
	{
		printf("\na[%d]= ", i);
		scanf("%d", &a[i]);
	}
	printf("Trung binh cong la: %.2f", trungbinhcong(a, n));
	float tbcsd = tbcsoduong(a, n);
	if(tbcsd>0)
	{
		printf("\nTrung binh cong so duong la: %.2f ", tbcsd);
	}else{
		printf("\nKhong co so duong trong mang");
	}
}
