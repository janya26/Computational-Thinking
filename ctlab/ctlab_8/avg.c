/*#include<stdio.h>
float avg(int marks[]);
int array(int marks[]);
int main()
{
float avg;
int marks[5]={99,90,96,93,95};
array(marks);
printf("program done\n");
}
int array(int marks[])
{
int i;
float avg;
for(i=0;i<=4;i++)
printf("%d\n",marks[]);
avgg=avg(marks);
printf("average marks = %1.f",avgg);
printf("average done\n");
}
float avg(int marks[[)
{
int i;
float sum = 0;
float avgg;
for (i=0;i<=4;i++)
{
sum += marks[i];
}
printf("%f\n",sum);
avgg=(sum/5);
return avgg;
}*/

#include <stdio.h>
float calculateAverage(int marks[], int size);
int main() {
    int marks[5] = {99, 90, 96, 93, 95};
    float average = calculateAverage(marks, 5);  
    printf("Average marks = %.1f\n", average);
    printf("Program done\n");
    return 0;
}
float calculateAverage(int marks[], int size) {
    int i;
    float sum = 0;
    for (i = 0; i < size; i++) 
    {
        printf("Mark %d: %d\n", i + 1, marks[i]);
        sum += marks[i];
    }
    float average = sum / size;
    return average;
}
