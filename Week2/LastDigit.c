#include <stdio.h>

int main()
{
    int number;
    printf("Enter the Number you want : ");
    scanf("%d", &number);
    int remaining = number / 10;
    printf("The Remaining Digits : %d", remaining);

    return 0;
}
