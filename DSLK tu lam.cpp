#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct sinhvien
{
	char MSSV[00];
	int tuoi;
	char Ten[100];
};
struct Node
{
	sv info;
	struct Node* Next;
};
struct List
{
	Node* Head;
	Node* Tail;
};
Node* CrNode (sv x)
{
	Node *p;
	p=new Node;
	if(p==NULL)
	{
		exit(1);
	}
	p->Info=x;
	p->pNext=NULL;
	return p;
}
void CrList(List &l)
{
	l.Head=l.Tail=NULL;
}
void in(sv &x)
{
	printf("\nNhap Ho va Ten : "); fflush(stdin); gets(x.ten);
	printf("\nNhap MSSV: "); fflush(stdin); gets(x.MSSV);
	printf("\nNhap tuoi: "); scanf("%d", &x.tuoi);
}
void AddTail(List &l, Node *p)
{
	if(l.Head=NULL)
	{
		l.Head=l.Tail=p
	}
	else 
	{
		l.Tail->Next=p;
		l.Tail=p;
	}
}
void nhap(List &l)
{
	sv x;
	printf("Nhan gi cung duoc.");
	printf("Nhan 0 de dung nhe.");
	do
	{
		kt = getch;
		if(kt==NULL)
		{
			break;
		}
		in(x);
		Node *p=CrNode(x);
		AddTail(l,p);
	}while(1);
}
void out(sv &x)
{
	printf("\n%s	%s	%d", x.ten, x.MSSV, x.tuoi);
}
void xuat(List &l)
{
	Node *p;
	p=l.Head;
	while(p!=NULL)
	{
	out(p->Info);
	p=p->Next;	
	}
}
void menu()
{
	List l;
	Node *p;
	sv x;
	char chon;
	CrList(l);
	do
	{
	printf("\n\t\t\t\tMENU");
	printf("\n\t1. Nhap danh sach");
	printf("\n\t2. Chen");
	printf("\n\t3. Duyet");
	printf("\n\t4. Tim kiem");
	printf("\n\t5. Xoa");
	printf("\n\t0. Nhan 0 de thoat");
	chon = getch();
		switch (chon)
		{
		case '1': {nhap(l); break; }
		case '2': {xuat(l); break; }
		//case '3': {nhap(l); break; }
		//case '4': {nhap(l); break; }
		//case '5': {nhap(l); break; }
		case '0': exit(1);
		default: printf("\nNhap lai")
		}	
	}while(chon!=NULL)
}
int main()
{
	while(1)
	{
		menu();
		getch();
	}
	
}

