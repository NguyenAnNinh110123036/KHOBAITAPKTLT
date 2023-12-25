#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int a[2][3] = {{9,8,7},{3,2,1}};
	int n = 2,m = 3;
	FILE * fp;
	char adu[100];
	printf("Nhap file ban ey:");
	fflush(stdin);
	gets(adu);
	fp = fopen (adu, "wt");
	if( fp == NULL )
	{
		printf("\n Nhap sai roi khong mo duoc ");
		exit(0);
	}
	else
	{
		fprintf(fp,"So dong la %d\nSo cot la %d\n", n, m);
		for(int i= 0; i<n; i++)
		{
			for(int j= 0; j<m; j++)
			fprintf(fp, "%d\t", a[i][j]);
			fprintf(fp, "\n");
		}
		fprintf(fp, "\n");
	}
	fclose(fp);
}
