#include<stdio.h>
int fib(int n);
int main()
{
int n;
printf("enter how many fibonacci numbers you want to display:");
scanf("%d",&n);
printf("fibonacci sequence\n");
for (int i=0; i<n; i++)
{
printf("%d\n", fib(i));
}
}
int fib(int n)
{
if (n==0)
return 0;
else if (n==1)
return 1;
else 
return fib(n-1)+fib(n-2);
}
