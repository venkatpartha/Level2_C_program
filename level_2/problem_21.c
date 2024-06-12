//write a program to get a number from user and print the total number degits which are odd in the number.
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
if(l%2==1)
{
count=count+1;
}
}
printf("%d\n",count);
return 0;
}
