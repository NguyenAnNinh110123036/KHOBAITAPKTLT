#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <alloc.h>
main()
{
int x[101],y[101]:
int mh=0,mode=0,i,n;
char *p[101];
initgraph(&mh,&mode, "");
if(graphresult()!=0)
cxit(1);
setcolor(RED);
for(i=1;i<=1000; ++i)
{
putpixel(random(getmaxx()),
random(getmaxy()),random(getmaxcolor()));
}
for(i=1;i<=100; ++i)
{
x[i]=random(getmaxx())-10;

y[i]=random(getmaxy())-10;

if(x[i]<0) x[i]=0;

if(y[i]<0) y[i]=0;

n-imagesize(x[i],y[i],x[i]+10,y[i]+10);

253

pli)-(char*)malloc(n);

getimage(x[i].y[i],x[i]+10,y[i]+10,p[i]);
}
do 
{

for(i=1;i<=100; ++i)
{
setfillstyle(SOLID_FILLi+1);
picslice(x[i]+5,y[i]+5,0,360,5);
}
delay(500); 
for(i=100;i>-1;--i)
putimage(x[i].y[i].p[i],COPY_PUT);
delay(500);
}
while(!kbhit());
getch();
getch();
closegraph();
}