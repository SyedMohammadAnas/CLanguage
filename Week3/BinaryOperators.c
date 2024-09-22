#include <stdio.h>

int main()
{
    int a = 5, b = 10, result = 5;
    printf("A + B = %d\n", a+b);
    printf("A - B = %d\n", a-b);
    printf("A * B = %d\n", a*b);
    printf("A / B = %d\n", a/b);
    printf("Checking for both Conditions  = %d\n", (a<b && b>a));
    printf("Checking for either Conditions  = %d\n", !(a<=b || b>=a));
    printf("Result : %d\n", result += a);
    printf("Result : %d\n", result -= a);
    printf("Result : %d\n", result *= b);
    printf("Result : %d\n", result /= b);
    printf("Result : %d\n", result %= a);

    return 0;
}
