#include<stdio.h>
void main(){
    int l,b;
    printf("Enter the lenght and breadth : ");
    scanf("%d %d", &l, &b);
    printf("The Area of the rectangle is : %d CM^2", l*b);
    printf("\nThe Perimeter of the rectangle is : %d CM", 2*(l+b));
}