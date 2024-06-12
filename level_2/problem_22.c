//write a program to get a number from user and print the total number two digits odd number in the number.
#include<stdio.h>
int main()
{
int x,count=0;
printf("Enter the number : ");
scanf("%d",&x);
while(x>9)
{
int l=x%100;
x=x/10;
if(l%2==1)
{
count++;
}
}
printf("%d\n",count);
return 0;
}
