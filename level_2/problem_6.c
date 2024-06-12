//loop program to print two digit odd numbers, below 20.
#include<stdio.h>
int main()
{
int x;
for(x=1;x<20;x++)
{
if(x%2==1)
{
if(x>10){
printf("%d\n",x);}
}
}
return 0;
}
