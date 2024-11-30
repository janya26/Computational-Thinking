#include <stdio.h>
int findMax(int arr[], int size);
int main() {
int size;
printf("Enter the number of elements: ");
scanf("%d", &size);
int arr[size];
printf("Enter the elements:\n");
for (int i = 0; i < size; i++) {
scanf("%d", &arr[i]);
}
int max = findMax(arr, size);
printf("The maximum element in the array is: %d\n", max);
return 0;
}
int findMax(int arr[], int size) {
int max = arr[0];
for (int i = 1; i < size; i++) {
if (arr[i] > max) {
max = arr[i];
}
}
return max;
}

