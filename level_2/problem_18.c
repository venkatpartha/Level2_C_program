//write a program to get a number from user and print weather that number's first two digit (1's and 10's digit) is prime or not.
#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
int temp=x%100;
if(temp%2==0||temp%3==0||temp%5==0||temp%7==0)
{
printf("Not prime\n");
}
else{
printf("Prime\n");
}
return 0;
}
