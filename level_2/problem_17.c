//write a program to get a number from user and print weather that number is prime and sum of digit is equal to 14 or not.
#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
if(x%2==0||x%3==0||x%5==0||x%7==0)
{
if(x%10+x/10==14){
printf("Not prime but sum of digit is 14\n");}
else{
printf("Not prime & sum of digit is not 14\n");
}
}
else{
if(x%10+x/10==14){
printf("Prime & sum of digit is 14\n");}
else{
printf("Prime but sum of digit is not 14\n");
}
}
return 0;
}
