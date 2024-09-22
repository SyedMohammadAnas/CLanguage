#include <stdio.h>

int main()
{
    int p, r, t;
    printf("Enter the Principle Amount : ");
    scanf("%d", &p);
    printf("Enter the Rate Percentage : ");
    scanf("%d", &r);
    printf("Enter the time (in Years) : ");
    scanf("%d", &t);
    double si = (p * t * r) / 100;
    printf("Amount of Simple interest : %.2f \n", si);
    printf("Total Amount with Simple Interest : %.2f", si+p);

    return 0;
}
