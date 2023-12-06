#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
void nhapmang(int x[100][100], int &m, int &n){
	do{
		printf("Nhap vao m: ");
		scanf("%d", &m);
		printf("Nhap vao n: ");
		scanf("%d", &n);
	}while(m<=0 || n<=0);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatmang(int x[100][100], int m, int n)
{
	printf("\nMang da nhap: \n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", x[i][j]);
		}
		printf("\n");
	}
}
void sapxep(int x[100][100], int m, int n)
{
	int a = m*n, tam;
		for(int i=0; i<a-1; i++)
		{
			for(int j=i+1; j<a; j++)
			
			{
				if(x[i/n][i%n] > x[j/n][j%n])
				{
				tam = x[i/n][i%n];
				x[i/n][i%n] = x[j/n][j%n];
				x[j/n][j%n] = tam;
				}
			}						
		
		}
}
int KiemTraSNT (int n)
{
	if (n<2)
	return 0;
	for (int i=2; i*i <= n; i++)
	{
		if (n%i==0)
		{
		return 0;
		}
	}
return 1;         
}
int tongSNT(int x[100][100], int &n, int &m)
{
	int c=0;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
	{
		if(KiemTraSNT(x[i][j])  && x[i][j]%3==0)
		{
			c=x[i][j]+c;
		
		}
	}
	return c;
}
}
void SNT(int x[100][100], int &n, int &m)
{
	int e=tongSNT(x, n, m);
	printf("Tong SNT chia het cho 3 la %d", e);
}
int main()
{
	int n, m, x[100][100], key, t;
	while(true)
	{
		system("cls");
		printf("*************************************************");
		printf("\n*	1.Nhap Xuat mang			*");
		printf("\n*	2.SapXep				*");
		printf("\n*	3.Tinh tong SNT chia het cho 3		*");
		printf("\n*	0.Thoat					*");
		printf("\n*************************************************");
		fflush(stdin);
		printf("\n \t\t		AN PHIM CHON:");
		scanf("%d", &key);
		switch(key)
		{
			case 1:
				fflush(stdin);
				nhapmang(x, n, m);
				xuatmang(x, n, m);
				printf("\n Bam phim bat ky de tiep tuc");
				getch();
				break;
				case 2:
				fflush(stdin);
				sapxep(x, m, n);
				printf("\n Mang da sap xep tang dan la");
				xuatmang(x, n, m);
				printf("\n Bam phim bat ky de tiep tuc");
				getch();
				break;
				case 3:
				fflush(stdin);
				SNT(x, n, m);
				printf("\n Bam phim bat ky de tiep tuc");
				getch();
				break;
				case 0:
				exit(1);
				
		}
		
	}
	}
