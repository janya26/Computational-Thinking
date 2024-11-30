#include<stdio.h>
void swap(int a, int b);
int main()
{
int a,b;
printf("enter 2 numbers to swap:");
scanf("%d%d", &a,&b);
swap(a,b);
}
void swap(int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("%d %d\n",a,b);
}
