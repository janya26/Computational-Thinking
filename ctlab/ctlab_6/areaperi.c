#include <stdio.h>
int area(int x, int y);
int per(int x, int y);
int main()
{
int a,p,x,y;
printf("enter the values of length and breadth : ");
scanf("%d%d",&x,&y);
a=area(x,y);
p=per(x,y);
printf("the area of the square is :%d\n",p);
printf("the perimeter of the square is :%d\n",a);
return 0;
}
int area(int x, int y)
{
return (x*y);
}
int per(int x, int y)
{
return (2*(x+y));
}
