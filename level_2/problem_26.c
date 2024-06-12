//write a program to print the biggest 4 digits number which is divided by 7 and 9.
#include<stdio.h>
int main()
{
int x;
int l;
for(x=1000;x<10000;x++)
{
if(x%7==0 && x%9==0)
{
l=x;
}
}
printf("%d\n",l);
return 0;
}
