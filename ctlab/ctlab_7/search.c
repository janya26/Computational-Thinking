#include <stdio.h>
int search(int n, int r) 
{
int number;
for (int i = 0; i < n; i++) 
{
printf("Enter number %d: ", i + 1);
scanf("%d", &number);
if (number == r)
{
return i; 
}
}
return -1; 
}
int main() 
{
int n, r;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter the number to search: ");
scanf("%d", &r);
int result = search(n,r);
if (result != -1)
{
printf("Element found at position %d.\n", result + 1);
} 
else
{
printf("Element not found.\n");
}
return 0;
}
