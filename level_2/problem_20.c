//write a program to get a number from user and print weather that number is prime or not.
#include<stdio.h>
int main()
{
int x=1,count=0;

for(x=1;x<10;x++)
{
for(int i=2;i<10;i++){
if(x/i==1 && x==i && x%i!=1 )
{
if(x%2==1 && x%3>=2)
{
count=count+1;
}
}
}
}
printf("%d\n",count);
return 0;
}
