//loop program to print two digit even numbers, who's sum of digits are 6.
#include<stdio.h>
int main()
{
int x;
for(x=1;x<99;x++)
{
if(x%2==0)
{
if(x/10+x%10 == 6 && x>10){
printf("%d\n",x);}
}
}
return 0;
}
