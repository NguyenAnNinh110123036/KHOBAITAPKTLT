#include"stdio.h"
#include"conio.h"
#include"math.h"
void nhap (int a[], int &n){
	do{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	for(int i=1; i<=n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n){
	printf("\nMang da nhap la: \n");
	for(int i=1; i<=n; i++)
	{
		printf("\t%d ", a[i]);
	
	}
}
void yeucau1(int a[], int &n, int x){
	int j=0;
	printf("\nNhap x= ");
	scanf("%d", &x);
	for(int i=1; i<=n; i++)
	{
		if(x==i){
			
			printf("\nGia tri phan tu thu %d la: %d ", x, a[i]);
			
		}
		else
		j++;
	
	}
	if(j==n){
			printf("\nKhong tim thay");
	}
	
}
void max(int a[], int &n){
	int max=a[1];
	int t=0, i;
	for(int i=1; i<=n; i++)
	{
		if(a[i] >= max){
			max=a[i];
			t=i;
			
		}
			
	}
	printf("\nMax tai vi tri %d la :%d", t, max);


}
void min(int a[], int &n){
	int min=a[1];
	int t=0, i;
	for(int i=1; i<=n; i++)
	{
		if(a[i] <= min){
			min=a[i];
			t=i;
		}
			
	}
	printf("\nMin tai vi tri %d la :%d", t, min);


}
void yeucau4(int a[], int &n){
	int sole;
	printf("\nCac so le trong mang la:  ");
	for(int i=1; i<=n; i++)
	{
		if(a[i] %2 != 0 ){
			sole=a[i];
			
			printf("\t%d", a[i]);
		}
			
	}
	

}
void yeucau5(int a[], int &n){
	int tong=0;
	printf("\nTong cac phan tu trong mang la:  ");
	for(int i=1; i<=n; i++)
	{	
			tong+=a[i];
		}
			printf("\t%d", tong);
	}
		



int main()
{
	int a[1000],  n, x;
	nhap (a, n);
	yeucau1 (a, n, x);
	max (a, n);
	min (a, n);
	yeucau4 (a, n);
	yeucau5 (a, n);
	xuat (a, n);
}
