#include"stdio.h"
#include"conio.h"
int a[100];
	int n, i;

void taofile(void)
{
	FILE *f;
		f=fopen("D:\\Songuyen.dat", "w+b");
{
	printf("Nhap so phan tu cua mang ");
		scanf("%d", &n);
			for(int i=0; i<n; i++)
				{
					printf("a[%d]", i);
						scanf("%d", &a[i]);
							fprintf(f, "%3d", a[i]);
		
				}	
}	
fclose(f);
//Kiem tra SNT
}
void ktSNT(void)
{
	
}
int main ()
{
	
	taofile();





getch();
}
