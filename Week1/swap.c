#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the numbers you want to swap : \n");
    scanf("%d %d", &a, &b);
    printf("Numbers before Swaggping \n A : %d   B : %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nNumbers after Swaggping \n A : %d   B : %d", a, b);
    return 0;
}
