//write a program to get a number from user and print reverse that number.
#include<stdio.h>
int main()
{
int x,rev=0;
scanf("%d",&x);
while(x>0)
{
rev=rev*10+x%10;
x/=10;
}
printf("%d\n",rev);
return 0;
}
