#include <stdio.h>
#include <math.h>

int main()
{
    const double pi = 3.14;
    int radius;
    
    printf("Enter the Radius of the Circle: ");
    scanf("%d", &radius);

    double cir = 2 * radius * pi;
    double area = pi * pow(radius, 2);

    printf("The circumference of the Circle: %f\n", cir);
    printf("The Area of the Circle: %f\n", area);

    return 0;
}