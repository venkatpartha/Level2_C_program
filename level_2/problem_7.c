//loop program to print two digit odd numbers, who's sum of digits are 7.
#include<stdio.h>
int main()
{
int x;
for(x=1;x<99;x++)
{
if(x%2==1)
{
if(x/10+x%10 == 7 && x>10){
printf("%d\n",x);}
}
}
return 0;
}
