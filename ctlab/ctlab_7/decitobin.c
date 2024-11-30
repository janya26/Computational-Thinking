#include <stdio.h>
void dtob(int n);
int main()
{
int x,r;
printf("enter the decimal value you want to convert to binary:");
scanf("%d",&x);
printf("the binary form is \n");
dtob(x);
printf("\n");
}
void dtob(int n)
{
if (n>1)
{
dtob(n/2);
}
printf("%d", n % 2);
}
