//write a program to get a number from user and print weather that number is prime or not.
#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
if(x%2==0||x%3==0||x%5==0||x%7==0)
{
printf("Not prime\n");
}
else{
printf("Prime\n");
}
return 0;
}
