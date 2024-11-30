#include<stdio.h>
int main()
{
int i, j, rows;
printf("enter the number of rows :");
scanf("%d", &rows);
for (i=1; i <= rows; ++i)
{
for (j=1; j <= i; ++j)
{
printf("* ");
}
printf("\n");
}
return 0;
}

/*#include<stdio.h>
int main()
{
int i,s,r,k=0;
printf("enter the number of rows:");
scanf("%d", &r);
for (i=1; i<= r; ++i, k=0)
{ 
for (s=1; s<=r -i; ++s)
{
printf(" ");
}
while (k!=2*i-1)
{ 
printf("* ");
++k;
}
printf("\n");
}
return 0;
}*/
