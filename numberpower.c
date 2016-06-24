#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,power;
printf("Enter value of a: ");
scanf("%d",&a);
printf("Enter value of b: ");
scanf("%d",&b);
power=1;
for(i=1;i<=b;i++)
{
power=power*a;
}
printf("a(power)b = %d",power);
getch();
}
