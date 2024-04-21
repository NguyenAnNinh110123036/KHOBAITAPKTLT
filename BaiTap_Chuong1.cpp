#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"
typedef struct
{
	char hehe[100];
}Nhap;
void taofile(char *FILENAME)
{
	FILE *f;
	Nhap nh;
	f=fopen(FILENAME, "w+b");
	fflush(stdin);
	if(f!= NULL)
	{
		printf( "Nhap dell gi cung duoc: ");
		gets(nh.hehe);
		fwrite(&nh, sizeof(nh), 1, f);
		fflush(stdin);
	}
	fclose(f);
	printf("\nBam so gi do di\n ");
	getch();	
}
void readfile(char *FILENAME)
{
	FILE *f;
	
	Nhap nh;
	f=fopen(FILENAME,"rb");
	if(f == NULL)
	{
		printf("Loi me roi");
	}
	else
	{
	fread(&nh, sizeof(nh), 1, f);
	printf("Noi dung cua file ne: %s", nh.hehe);
	fclose(f);	
	}
	printf("\nBam so gi do di\n ");
	getch();
}
void noifile(char *FILENAME)
{
	FILE *f;
	char a[10000];
	Nhap nh;
	f=fopen(FILENAME,"ab");
	if(f == NULL)
	{
		printf("Loi me roi");
	}
	else
	{
	printf("Nhap gi cung duoc dell lo dau:   ");
	scanf("%s", &a);
	fclose(f);	
	}
	printf("\nBam so gi do di\n ");
	getch();
	
}
int main ()
{
	int c;
	for(;;)
	{
		printf("1: Nhap FILE\n");
		printf("2: In noi dung ra man hinh\n");
		printf("3: Noi them thong tin\n");
		printf("Bam chon so gi cung duoc\n");
		scanf("%d", &c);
		fflush(stdin);
		if(c==1)
		{
				taofile("D:\\KaKa.txt");
		}
		else if(c==2)
		{
			readfile("D:\\KaKa.txt");
		}	
		else if(c==3)
		{
			noifile("D:\\KaKa.txt");
		}	
		else break;
	}
}
