//write a program to get a number from user and print the total number single digits perfect square number in the number.
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
for(int i=1;i<10;i++){
if(i*i==l)
{
count++;
}
}
}
printf("%d\n",count);
return 0;
}
