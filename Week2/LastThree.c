#include <stdio.h>

int main()
{
    long long PhoneNumber;
    printf("Enter the Phone Number : ");
    scanf("%lld", &PhoneNumber);
    long lastThree = PhoneNumber % 1000;
    long remaining = PhoneNumber / 1000;
    printf("The Last Three Digits of the Phone Number : %ld\n", lastThree);
    printf("The Remaining Phone Number : %ld", remaining);

    return 0;
}
