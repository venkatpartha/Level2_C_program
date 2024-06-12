//loop program to print the sum of two digit numbers, who's 1's digits is 5.
#include<stdio.h>
int main()
{
int x,sum;
for(x=0;x<99;x++)
{
if(x%10==5 && x>10)
{
sum+=x;
}
}
printf("%d\n",sum);
return 0;
}
