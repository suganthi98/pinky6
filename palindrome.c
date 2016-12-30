#include<stdio.h>
int main()
{
int n,r,temp,sum=0;
printf("enter the number \n");
scanf("%d",&n);
temp=n;
while(n)
{
r=n%10;
n=n/10;
sum=sum*10+r;
}
if(temp==sum)
printf("%d the n id palindrome",temp);
else
printf("the n is not palindrome",temp);
return 0;
}
