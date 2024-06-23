#include"stdio.h"
#include"conio.h"
#include"string.h"
#include"stdlib.h"
#include"math.h"
typedef struct tamgiac
{
	int a;
	int b;
	int c;
}tamgiac;
typedef struct node
{
	tamgiac data;
	node *pnext;
}node;
typedef struct list
{
	node *phead;
	node *ptail;
}list;
void khoitao(list &l)
{
	l.phead=l.ptail=NULL;
}
node *taonut()
{
	node *p;
	tamgiac tg;
	p=new(node);
	if(p!=NULL)
	{
		printf("\nNhap cac canh a= ");
		scanf("%d", &tg.a);
		printf("\nNhap cac canh b= ");
		scanf("%d", &tg.b);
		printf("\nNhap cac canh c= ");
		scanf("%d", &tg.c);
		
		p->data=tg;
		p->pnext=NULL;
		return p;
	}
	return NULL;
}
void addtail(list &l, node *new_ele)
{
	if(l.phead=NULL)
	{
		l.phead=new_ele;
		l.ptail=l.phead;
	}
	else
	{
		l.phead->pnext=new_ele;
		l.ptail=new_ele;
	}
}
void addfirst(list &l, node *new_ele)
{
	if(l.phead=NULL)
	{
		l.phead=new_ele;
		l.ptail=l.phead;
	}
	else
	{
		new_ele->pnext=l.phead;
		l.phead=new_ele;
	}
}
void addafter(list &l, node *q, node *new_ele)
{
	if(q!=NULL)
	{
		new_ele->pnext=q->pnext;
		q->pnext=new_ele;
		if(q==l.ptail)
		{
			l.ptail=new_ele;
		}
		else
		{
			addfirst(l, new_ele);
		}
	}
}

void taotamgiac(list &l)
{
	node *p;
	printf("\nNhap vao 3 canh cua tam giac");
		p=taonut();
		addfirst(l, p);
}
void kiemtra(list &l)
{
	node *p; khoitao(l);
	int a, b , c;
		if((a + b > c) &&  (a + c > b) && (c + b > a));
		{
			printf("\nTao thanh tam giac ");
		}
		else
		{
			printf("\nKhong tao thanh tam giac ");
		}
		
}	

void duyetds(list l)
{
	node *p;
	p=l.phead;
	while(p!=NULL)
	{
		printf("Canh a= %d;	Canh b= %d;	Canh c= %d;", p->data.a, p->data.b, p->data.c);
		p=p->pnext;
	}
}

int main()
{
	list l; node *q,*new_ele;
	khoitao(l);
	taotamgiac(l);
	//kiem tra tsam giac
	printf("Tam giac da nhap la: ");
	duyetds(l);
	getch();
}
