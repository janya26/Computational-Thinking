#include <stdio.h>
#include <math.h>
long dtob(int n)
int main()
{
int x;
printf("enter the number to find binary:");
scanf("%d",&x);
printf("the binary number is:");
dtob(x);
}
long bn=0;
int r,t=1;
while (n!=0)
{
r=n%2;
n=n/2;
bn=bn+r*t;
t=t*10;
}

