
#include <stdio.h>
#include <conio.h>
typedef struct Trangthai
{
	int n;
	int k;
}Trangthai;
typedef struct node
{
	Trangthai data;
	node *link;
}node;
typedef struct stack
{
	node *top;
}stack;
void Init(stack &s)
{
	s.top=NULL;
}
int Empty(stack s)
{
	return s.top==NULL?1:0;
}
void Push(stack &s,Trangthai x)
{
	node *p;
	p=new(node);
	p->data=x;
	p->link=s.top;
	s.top=p;
}
Trangthai Pop(stack &s)
{
	node *p;
	if(!Empty(s))
		p=s.top;
		s.top=p->link;
	return p->data;
}
long Combo(int n,int k)
{		
		stack st; long TH=0;
		Trangthai tt, tt1,tt2; 
		Init(st);
		tt={n,k};
		Push(st,tt);
		while (!Empty(st))
		{
		tt=Pop(st);
		if(tt.k==0 || tt.n==tt.k)	
			TH = TH + 1;
		if(tt.k>0 && tt.n>tt.k)	
			{
			printf("A");	
			tt1={tt.n-1,tt.k-1};
			Push(st,tt1);
			tt2={tt.n-1,tt.k};
			Push(st,tt2);
			}
		}
	return TH;
}
int main()
{
int n, k;
printf("\n Nhap vao n:");	scanf("%d",&n);
printf("\n Nhap vao k:"); 	scanf("%d",&k);
printf("\n Ket qua:%d",Combo(n,k));
getch();
}

?ng d?ng hàng ??i ?? duy?t danh sách
#include<stdio.h>
#include<conio.h>
#include <string.h>
# define N 20
typedef struct sinhvien
{
char Ma[10];
char Hoten[40];
char Phai[3];
} Sinhvien;
typedef struct node
{
 sinhvien data;
 node *link;
}node;
typedef struct queu
{
 node *front;
 node *rear;
}queu;

void khoitao(queu &q)
{
 q.front=q.rear=NULL;
}
int empty(queu q)
{
 if(q.front==NULL)
 return 1;
 else
 return 0;
}
void enqueu(queu &q, sinhvien x)
{ node * new_ele;
 new_ele=new(node);
 new_ele->data=x;
 new_ele->link=NULL;
 
 if(q.front==NULL)
 {
  q.front=new_ele;
  q.rear=q.front;
 }
  else
  {
   q.rear->link=new_ele;
   q.rear=new_ele;
  }
 }
sinhvien dequeu(queu &q)
{
 node *p;sinhvien x;
 if(!empty(q))
 {
  p=q.front;
  x=p->data;
  q.front=p->link;
  delete(p);
  }
 return x;
}
void WriteFile(char *FileName)
{
FILE *f; int n,i; Sinhvien sv;
f=fopen(FileName,"wb");
printf("\nNhap bao nhieu sinh vien? ");
scanf("%d",&n);
fflush(stdin);
for(i=1;i<=n;i++)
{
printf("Sinh vien thu %i\n",i);
printf("	- MSSV: ");
gets(sv.Ma);
printf("	- Ho ten: ");
gets(sv.Hoten);
printf("	- Phai: ");
gets(sv.Phai);
fwrite(&sv,sizeof(sv),1,f);
fflush(stdin);
}
fclose(f);
printf("\nBam phim bat ky de tiep tuc");
getch();
}
void ReadFile(char *FileName)
{
FILE *f; Sinhvien sv; f=fopen(FileName,"rb");
printf("	MSSV	|	Ho va ten   | Phai \n");
fread(&sv,sizeof(sv),1,f);
while (!feof(f))
{
printf("	%s	|	%s    |   %s\n",sv.Ma,sv.Hoten, sv.Phai);
fread(&sv,sizeof(sv),1,f);
}
fclose(f);
printf("\nBam phim bat ky de tiep tuc!!!");
getch();
}
int main()
{
 int n; sinhvien x; queu q1, q2;
 printf("\nTao tap tin sinh vien!");
 WriteFile((char *)"e:\\sinhvien.dat");
 
 FILE *f0,*f1,*f2;
 khoitao(q1); khoitao(q2);
 f0=fopen("e:\\sinhvien.dat","rb");
 fread(&x,sizeof(x),1,f0);
while (!feof(f0))
{
if(strcmp(x.Phai,"nu")==0)
	enqueu(q1,x);
else
	enqueu(q2,x);
fread(&x,sizeof(x),1,f0);
}
fclose(f0);
f1=fopen("e:\\sinhviennu.dat","wb");
while (!empty(q1))
	{
		x=dequeu(q1);
		fwrite(&x,sizeof(x),1,f1);
	}
fclose(f1);

f2=fopen("e:\\sinhviennam.dat","wb");
while (!empty(q2))
	{
		x=dequeu(q2);
		fwrite(&x,sizeof(x),1,f2);
	}
fclose(f2);
printf("\nDanh sach sinh vien da nhap:");
ReadFile((char *)"e:\\sinhvien.dat");

printf("\nDanh sach sinh vien nu:");
ReadFile((char *)"e:\\sinhviennu.dat");

printf("\nDanh sach sinh vien nam:");
ReadFile((char *)"e:\\sinhviennam.dat");

}


