#include <stdio.h>

int main()
{
    int marks[5], total = 0, i;
    printf("Enter the marks(out of 100) for 5 Subjects : ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    float avg = total / 5;

    if(avg >= 90)
        printf("This Student got 'A' grade with Average of : %.2f", avg);
    else if(avg >= 80 && avg < 90)
        printf("This Student got 'B' grade with Average of : %.2f", avg);
    else if(avg >= 70 && avg < 80)
        printf("This Student got 'C' grade with Average of : %.2f", avg);
    else if(avg >= 60 && avg < 70)
        printf("This Student got 'D' grade with Average of : %.2f", avg);
    else if(avg >= 50 && avg < 60)
        printf("This Student got 'E' grade with Average of : %.2f", avg);
    else
        printf("This Student FAILED !! Average : %.2f", avg);
}
