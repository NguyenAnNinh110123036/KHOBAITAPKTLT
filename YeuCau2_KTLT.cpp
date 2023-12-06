#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>

int xoa(char s[1000], int x)
{
	int n=strlen(s);
	for(int i=x; i<n; i++)
	{
		s[i]=s[i+1];
		s[n]='\0';
	}	
}
void xoaktt(char s[1000])
{
	for(int i=0; i<strlen(s); i++)
	if(s[i]==' ' && s[i+1]==' ')
	{
		xoa(s, i);
		i--;
	}
	if(s[0]==' ')
	xoa(s, 0);
	if(s[strlen(s)-1]==' ')
	xoa(s, strlen(s)-1);
}
void inhoa(char s[1000])
{
	int i=0;
	strlwr(s);
	s[0]=s[0]-32;
	for(int i=0; i<strlen(s); i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
		s[i+1]=s[i+1]-32;
	}
}
void chuoi(char s[1000])
{
	printf("Nhap chuoi S\t");
	gets(s);
	xoaktt(s);
	printf("\n");
	inhoa(s);
	puts(s);
}
void demkt(char s[1000])
{
	int a=0;
	char c;
	printf("\n Nhap mot ki tu: ");
	scanf("%c", c);
	strlwr(s);
	for(int i=0; i<strlen(s); i++)
	{
		if(s[i]==c)
		{
		a++;
		printf("\n So ky tu %d", a);
		}
		else
		{
			printf("DELL THAY");
		}
	}
	
}
int main()
{
	char s[1000];
	int key;
	while(true)
	{
		system("cls");
		printf("		-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-");
		printf("\n		|	1.Nhap chuoi S				|");
		printf("\n		|	2.Dem ki tu 				|");
		printf("\n		|	0.Thoat					|");
		printf("\n		-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-");
		fflush(stdin);
		printf("\n \t\t		AN PHIM CHON:");
		scanf("%d", &key);
		switch(key)
		{
			case 1:
				fflush(stdin);
				chuoi(s);
				printf("\n Bam phim bat ky de tiep tuc");
				getch();
				break;
				case 2:
				fflush(stdin);
				demkt(s);
				printf("\n Bam phim bat ky de tiep tuc");
				getch();
				break;
				case 0:
				exit(1);
				
		}
		
	}
	}
