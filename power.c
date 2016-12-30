#include<stdio.h>
int main()
{
int base,exponent;
int result=1;
printf("enter the base value \n ");
scanf("%d",&base);
printf("entre the exponent value \n ");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("answer =%d",result);
return 0;
}
