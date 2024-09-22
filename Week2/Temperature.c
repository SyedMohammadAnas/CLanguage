#include <stdio.h>

int main()
{
    float celcius, fahrenheit;
    printf("Enter the Temperature in Celcius : ");
    scanf("%f", &celcius);
    fahrenheit = (float)((celcius * 9/5) + 32);
    printf("The Temperature in %.2f ^C is Equal to %.2f ^F", celcius, fahrenheit);
}
