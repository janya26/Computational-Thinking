#include <stdio.h>
int sum(int a, int b);
int main()
{
int a,b,r;
printf("enter values of the a and b:");
scanf("%d%d",&a,&b);
r=sum(a,b);
printf("the sum of the number is : %d\n",r);
}
int sum(int a,int b)
{
return a+b;
}
