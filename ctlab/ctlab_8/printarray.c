#include <stdio.h>
void printArray(int arr[], int size, int index);
int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    printf("Array elements are: \n");
    printArray(arr, size, 0); 
    return 0;
}
void printArray(int arr[], int size, int index) 
{
    if (index == size)  
        return;
    printf("%d ", arr[index]); 
    printArray(arr, size, index + 1);  
}

