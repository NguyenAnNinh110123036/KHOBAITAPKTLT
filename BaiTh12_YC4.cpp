#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
	char Ma[10];
	char HoTen[50];
} SinhVien;
void WriteFile(char * FileName);
void ReadFile(char * FileName);
void Search(char * FileName);
int main()
{
	int c;
	for (;;)
	{
		printf("\n\t**********************\n");
		printf("\t 1. Nhap DSSV\n");
		printf("\t 2. In DSSV\n");
		printf("\t 3. TimKiem\n");
		printf("\t 4. Thoat\n");
		printf("\t Bam chon 1, 2, 3, 4: ");
		scanf("%d", &c);
		fflush(stdin);
		if( c == 1)
		{
			WriteFile("SinhVien.txt");	
		}
		else if ( c == 2)
		{
			ReadFile("SinhVien.txt");
		}
		else if ( c == 3)
		{
			Search("SinhVien.txt");
		}
		else break;
	}
}
void WriteFile(char * FileName)
{
	FILE * f;
	int n, i;
	SinhVien sv;
	f=fopen(FileName, "ab");
	printf("Nhap so luong SV ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		printf("Sinh vien thu %i\n", i);
		fflush(stdin);
		printf("MSSV: ");
		gets(sv.Ma);
		printf("Ho ten: ");
		gets(sv.HoTen);
		fwrite(&sv, sizeof(sv), 1, f);
	}
	fclose(f);
	printf("\nBam phim bat ki de tiep tuc");
	getch();
}
void ReadFile(char * FileName)
{
	FILE * f;
	SinhVien sv;
	f=fopen(FileName, "rb");
	printf("MSSV | Ho Ten\n");
	fread(&sv, sizeof(sv), 1, f);
	while(!feof(f))
	{
		printf(" %s | %s \n", sv.Ma, sv.HoTen);
		fread(&sv, sizeof(sv), 1, f);	
	}
	fclose(f);
	printf("\nBam phim bat ki de tiep tuc");
	getch();
}
void Search(char * FileName)
{
	char MSSV[15];
	FILE * f;
	int Found = 0;
	SinhVien sv;
	fflush(stdin);
	printf("MSSV can tim: ");
	gets(MSSV);
	f = fopen(FileName, "rb");
	while (!feof(f) && Found==0)
	{
		fread(&sv, sizeof(sv), 1, f);
		if(strcmp(sv.Ma, MSSV) == 0)
		Found = 1;
	}
	fclose(f);
	if(Found == 1)
	{
		printf("Tim thay SV co ma: %s\nHo Ten la: %s", sv.Ma, sv.HoTen);
		printf("\n");
	}
	else
	{
		printf("Khong tim thay SV co ma: %s", MSSV);	
	}
		printf("\nBam phim bat ki de tiep tuc");
		getch();
}
