//write a program to get a 4 digit number from user and print weather that number's first two digit (100's and 10's digit) is prime or not.
#include<stdio.h>
int main()
{
int x;
printf("enter 4 digit number\n");
scanf("%d",&x);
int temp=(x%1000)/10;
printf("temp = %d\n",temp);
if(temp%2==0||temp%3==0||temp%5==0||temp%7==0)
{
printf("Not prime\n");
}
else{
printf("Prime\n");
}
return 0;
}
