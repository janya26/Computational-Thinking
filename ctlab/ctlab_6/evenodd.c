#include <stdio.h>
int evenOdd(int n);
int main()
{
int n, e, o;
printf("enter a numberto check: ");
scanf("%d",&n);
e=evenOdd(n);
if (evenOdd(n) == 1)
printf("the number is even\n");
else 
printf("the number is odd\n");
}
int evenOdd(int n)
{
if (n%2==0)
return (1);
else
return (0);
}

