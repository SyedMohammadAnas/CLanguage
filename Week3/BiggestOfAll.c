#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Two Numbers you want to Compare : \n");
    scanf("%d %d", &a, &b);
    int max = (a < b) ? b : a;
    printf("The Biggest Number out of two is  : %d \n", max);

    printf("Enter Three Numbers you want to Compare : \n");
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The largest Number out of the Three : %d", max);

    return 0;
}
