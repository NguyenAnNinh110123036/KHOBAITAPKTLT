#include<stdio.h>
#include<conio.h>

int main()
{
FILE *f; 
f=fopen("D:\\Baihat.txt","w+");

if (f!=NULL)
{
fputs("Em oi Ha Noi pho.\n",f);
fputs("Ta con em, mui hoang lan; ta con em, mui hoasua.\n",f);
fputs("CON CAI NIT.\n",f);
fputs("CO LAM MOI CO AN.\n",f);fclose(f);
}
getch();
return 0;
}
