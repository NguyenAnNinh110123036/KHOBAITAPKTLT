
#include"stdio.h"
#include"conio.h"
#define N 20
typedef struct node
{
	char hoten[40];
	int tuoi;
}node;
typedef struct Queu
{
	int front,rear;
	node list[N];
}Queu;
void khoitao(Queu &q)
{
	q.front=q.rear=-1;
}
int empty(Queu q)
{
	if((q.front==-1)&&(q.rear==-1))
	return 1;
	else
	return 0;
}
int full(Queu q)
{
	if(q.front==0&&q.rear==N-1)
	return 1;
	if(q.front==q.rear+1)
	return 1;
	else
	return 0;
}
void enqueu(Queu &q,node x)
{
	if(!full(q))
	{
		if(empty(q))
		q.front=q.rear=0;
		else
		if(q.rear==N-1)
		q.rear=0;
		else
		q.rear=q.rear+1;
		q.list[q.rear]=x;
	}
}
node dequeu(Queu &q)
{
	if(!empty(q))
	{
		node t=q.list[q.front];
		if(q.front==q.rear)
		khoitao(q);
		else
		if(q.front==N-1)
		q.front=0;
		else
		q.front=q.front+1;
		return t;
	 }
}
int main()
{
	int n; node x;Queu q;
	printf("nhap so phan tu:");
	scanf("%d",&n);
	khoitao(q);
	for(int i=1;i<=n;i++)
	{
		printf("nhap ho ten:");
		fflush(stdin);
		gets(x.hoten);
		printf("nhap tuoi:");
		scanf("%d",&x.tuoi);
		enqueu(q,x);
	}
	while(!empty(q))
	{
		x=dequeu(q);
		printf("\n hotenL:%s",x.hoten);
		printf("\n tuoi:%d",x.tuoi);
	}
	getch();
}

