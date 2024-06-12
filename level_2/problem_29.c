//write program to get three numbers from user and print the LCM of those numbers.
#include<stdio.h>
int main()
{
int a,b,c,i,hcf=0;
printf("Enter the value of three number\t");
scanf("%d %d %d",&a,&b,&c);
for(i=1;i<=a && i<=b && i<=c;i++)
{
if(a%i==0 && b%i==0 && c%i==0)
hcf=i;
}
int lcm = (a*b*c)/hcf;
printf("\nLCM is %d\n",lcm);
return 0;
}
