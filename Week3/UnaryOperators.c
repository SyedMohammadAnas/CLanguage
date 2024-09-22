#include <stdio.h>

int main() {
    int a = 10;
    int result;

    result = +a;
    printf("Unary plus: %d\n", result);
    result = -a;
    printf("Unary minus: %d\n", result);
    result = ++a;
    printf("Increment a: %d\n", result);
    result = --a;
    printf("Decrement b: %d\n", result);
    result = !a;
    printf("Logical Not: %d\n", result);

    int *ptr = &a;
    printf("Stored in  : %p (Use of * to Store an Address)\n", ptr);
    printf("Adress     : %p (Use of & to print the Address)\n", &a);
    printf("ValueInside: %d (Use of * to print the value )\n", *ptr);

    result = sizeof(a);
    printf("The Size   : %d bits\n", result);

    return 0;
}
