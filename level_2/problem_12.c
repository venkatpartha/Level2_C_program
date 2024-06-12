//write a program to get a number from user and print sum of all digits.
#include<stdio.h>
int main()
{
int x,sum=0;
scanf("%d",&x);
while(x>0)
{
sum=sum+x%10;
x/=10;
}
printf("%d\n",sum);
return 0;
}
