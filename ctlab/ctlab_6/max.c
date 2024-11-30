#include <stdio.h>
int max(int a, int b, int c);
int main()
{
int a,b,c,m;
printf("enter any three numbers: ");
scanf("%d%d%d", &a,&b,&c);
m=max(a,b,c);
printf("the max out of the three numbers is %d\n",m);
}
int max(int a, int b, int c)
{
if (a>b && a>c)
return (a);
else if (b>a && b>c)
return (b);
else 
return (c);
}

