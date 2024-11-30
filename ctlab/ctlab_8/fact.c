#include<stdio.h>
int fact(int n);
int main()
{
int n,r;
printf("enter the numebr you want tof ind factorial of:");
scanf("%d",&n);
r=fact(n);
printf("the factorial of the number is: %d\n",r);
}
int fact(int n)
{
if (n==1)
return 1;
else 
return n*fact(n-1);
}
