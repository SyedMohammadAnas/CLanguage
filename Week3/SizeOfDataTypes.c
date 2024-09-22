#include <stdio.h>

int main() {
    printf("Size of char: %d bytes\n", (int)sizeof(char));
    printf("Size of int: %d bytes\n", (int)sizeof(int));
    printf("Size of float: %d bytes\n", (int)sizeof(float));
    printf("Size of double: %d bytes\n", (int)sizeof(double));
    printf("Size of long: %d bytes\n", (int)sizeof(long));
    printf("Size of long long: %d bytes\n", (int)sizeof(long long));
    printf("Size of short: %d bytes\n", (int)sizeof(short));
    printf("Size of unsigned int: %d bytes\n", (int)sizeof(unsigned int));
    printf("Size of unsigned long: %d bytes\n", (int)sizeof(unsigned long));
    printf("Size of unsigned long long: %d bytes\n", (int)sizeof(unsigned long long));
    printf("Size of unsigned short: %d bytes\n", (int)sizeof(unsigned short));

    return 0;
}
