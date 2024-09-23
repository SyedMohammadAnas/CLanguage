#include <stdio.h>

int main()
{
    int units;
    printf("Enter the number of units used : ");
    scanf("%d", &units);

    if(units <= 100)
        printf("The Total Electricity Bill for %d Units is : %.2f$", units, (units * 1.50) + ((units * 1.50) / 10));
    else if(units > 100 && units <= 300)
        printf("The Total Electricity Bill for %d Units is : %.2f$", units, (units * 2.00) + ((units * 2.00) / 10));
    else if(units > 300 && units <=500)
        printf("The Total Electricity Bill for %d Units is : %.2f$", units, (units * 3.00) + ((units * 3.00) / 10));
    else
        printf("The Total Electricity Bill for %d Units is : %.2f$", units, (units * 5.00) + ((units * 5.00) / 10));
}
