//write a program to get a number from user and interchange the first & last digits and print the result.
#include<stdio.h>
#include<math.h>
int main()
{
int x,res=0,lst,fst,i,mid;
scanf("%d",&x);
lst=x%10;//last digit
int temp=x;
while(temp>0)
{
temp/=10;
i++;
}
i=i-1;
printf("dig = %d\n",i);
fst=x/(pow(10,i));
mid=(x%(pow(10,i)));
mid=(mid%10)*10;
res=lst*(pow(10,i))+mid+fst;

printf("first = %d\n",fst);
printf("mid = %d\n",mid);
printf("last = %d\n",lst);
printf("%d\n",res);
return 0;
}
