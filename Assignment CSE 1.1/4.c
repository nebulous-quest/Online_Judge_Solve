#include <math.h>
#include <stdio.h>
float sumOf(float data[])
{
     float sum = 0;
    int i;
    for (i = 0; i < 5; i++)
        {
        sum += data[i];
        }
    return sum;
}
float avgOf(float data[])
{
    float average;
    average=sumOf(data)/5;
    return average;
}
float calculateSD(float data[])
{
    float sum1 = 0, avg1, SD = 0;
    int i;
    for (i = 0; i < 5; i++) {
        sum1 += data[i];
    }
    avg1 = sum1 / 5;
    for (i = 0; i < 5; i++)
        SD += pow(data[i] - avg1, 2);
    return sqrt(SD / 5);
}
int main()
{
    int i;
    float data[5];
    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++)
        scanf("%f", &data[i]);
    printf("\n The sum of 5 number is%.2f", sumOf(data));
    printf("\n The average of 5 number is%.2f", avgOf(data));
    printf("\n Standard Deviation = %.3f", calculateSD(data));
    return 0;
}

