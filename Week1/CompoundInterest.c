#include <stdio.h>
#include <math.h>

int main()
{
    int p, r, t, n;
    printf("Enter the Principle Amount : ");
    scanf("%d", &p);
    printf("Enter the Rate Percentage : ");
    scanf("%d", &r);
    printf("Enter the time (in years) : ");
    scanf("%d", &t);
    printf("Enter the number of times interest is calculated : ");
    scanf("%d", &n);
    double am = p * pow((1 + ((double)r/(100 * n))), t * n);
    printf("Amount of Compound interest : %.2f \n", am-p);
    printf("Total Amount with Compound Interest : %.2f", am);
}
