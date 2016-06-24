#include <stdio.h>
int main()
{
int inputnumber,Number,remainder,result=0;
printf("Enter a three digit number ");
scanf("%d",&inputnumber);
Number=inputnumber;
while(Number!= 0)
{
remainder=Number%10;
result= result+(remainder*remainder*remainder);
Number=Number/10;
}
if(result == inputnumber)
printf("%d is an Armstrong number",inputnumber);
else
printf("%d is not an Armstrong number",inputnumber);
return 0;
}
