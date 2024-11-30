#include<stdio.h>
int sumofdig(int n);
int main()
{
int n;
printf("enter the digit:");
scanf("%d",&n);
int r= sumofdig(n);
printf("the sum is %d\n",r);
}
int sumofdig(int n)
{
if (n==0)
return 0;
else 
return (n%10)+ sumofdig(n/10);
}
