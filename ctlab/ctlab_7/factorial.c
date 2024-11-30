#include <stdio.h>
int factorial(int n);
int main()
{
int x,r;
printf("enter the number you want to check factorial for:");
scanf("%d",&x);
r = factorial(x);
printf("the factorial of the number is %d\n",r);
}
int factorial(int n)
{
if (n==0 || n==1)
{
return 1;
}
else
{
return n * factorial(n-1);
}
}
