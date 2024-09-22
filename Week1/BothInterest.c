#include <stdio.h>
#include <math.h>

int main()
{
    int p, r, tc, ts, n;
    printf("Enter the Principle Amount : ");
    scanf("%d", &p);
    printf("Enter the Rate Percentage : ");
    scanf("%d", &r);
    printf("Enter the time (in years) for simple interest : ");
    scanf("%d", &ts);
    printf("Enter the time (in years) for compound interest : ");
    scanf("%d", &tc);
    printf("Enter the number of times interest is calculated : ");
    scanf("%d", &n);
    double si = (p * ts * r) / 100;
    double ci = p * pow((1 + ((double)r/(100 * n))), tc * n);
    printf("Amount of Simple interest : %.2f \n", si);
    printf("Total Amount with Simple Interest : %.2f\n", si+p);
    printf("Amount of Compound interest : %.2f \n", ci - p);
    printf("Total Amount with Compound Interest : %.2f", ci);

    return 0;
}
