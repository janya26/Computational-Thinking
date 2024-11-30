#include <stdio.h>
void printarray(int arr[], int s, int index);
int main()
{
int arr[] = {1,2,3,4,5};
int s = sizeof(arr) / sizeof(arr[0]);

printf("array elements are:\n");
printarray(arr, s, 0);
}
void printarray(int arr[], int s, int index)
{
if (index == s)
return;
printf("%d\n", arr[index]);
printarray(arr, s, index + 1);
}
