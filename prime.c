#include<stdio.h>
int main()
{
int n,i,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
count++;
break;
}
}
if(count==0&&n!=1)
printf("%d  the number is prime",n);
else
printf("the number is not prime",n);
return 0;
}
