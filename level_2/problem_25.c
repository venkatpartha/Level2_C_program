//write a program to get a number from user and print the total number single digits prime number in the number.
#include<stdio.h>
int main()
{
int x,count=0;
printf("Enter the number : ");
scanf("%d",&x);
while(x>0)
{
int l=x%10;
x=x/10;
if(l==2 || l==3 || l==5 || l==7)
{
count++;
}
}
printf("%d\n",count);
return 0;
}
