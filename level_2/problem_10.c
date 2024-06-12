//loop program to print the sum of two digit odd numbers, who's 10's digits is 7.
#include<stdio.h>
int main()
{
int x,sum;
for(x=0;x<99;x++)
{
if(x/10==7 && x>10){
if(x%2==1)
{
sum+=x;
}
}
}
printf("%d\n",sum);
return 0;
}
