#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,q1,q2;
int ch;
printf("enter coeff of the quadratic equation \n");
scanf("%f%f%f",&a ,&b, &c);
q1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
q2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
if(q1==q2)
ch=1;
else if(q1>0 && q2>0)
ch=2;
else 
ch=3;
switch(ch)
{
case 1: printf("roorts are equal and real \n"); break;
case 2: printf("the roots are unequal and real \n"); break;
case 3: printf("the roots are imaginary \n"); break;
default: printf("provide proper inputs \n");
}
}
