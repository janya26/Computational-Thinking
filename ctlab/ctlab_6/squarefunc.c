#include <stdio.h>
int square(int);
int main()
{
int num, res;
printf("enter a number: ");
scanf("%d",&num);
res=square(num);
printf("squrae of %d = %d\n", num, res);
}
int square(int x)
{
return (x*x);
}
