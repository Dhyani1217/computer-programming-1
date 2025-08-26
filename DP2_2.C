#include<stdio.h>
#include<conio.h>
void main()
{

int a,b,c;
clrscr();
printf("enter three numbers:  ");
scanf("%d%d%d",&a,&b,&c);
if(a<=b && a<=c)
{
printf("smallest number is %d",a);
}
else if(b<=a && b<=c)
{
printf("smallest number is %d",b);
}
else
printf("smallest number is %d",c);
getch();
}