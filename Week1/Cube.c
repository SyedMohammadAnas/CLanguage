#include <stdio.h>

int main()
{
    int side;
    printf("Enter the side length of the Cube : ");
    scanf("%d", &side);
    int volume = side * side * side;
    printf("The Volume of the Cube : %d", volume);
    
    return 0;
}