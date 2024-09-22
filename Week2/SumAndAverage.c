#include <stdio.h>

int main()
{
    int marks[5];
    int i, sum = 0; float avg;
    printf("Enter the 5 Marks : ");
    for(i = 0; i <= 4; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    avg = sum / 5.0;
    printf("The Sum of 5 Marks = %d\nThe Average of 5 Marks = %.2f", sum, avg);

    return 0;
}
