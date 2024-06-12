//write a program to get a number from user print the total number of digits in that number.
#include<stdio.h>
int main()
{
int x,i=0;
scanf("%d",&x);
while(x>0)
{
x/=10;
i++;
}
printf("%d\n",i);
return 0;
}
