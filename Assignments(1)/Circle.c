#include<stdio.h>
void main(){
    int r;
    printf("Enter the Radius : ");
    scanf("%d", &r);
    printf("The circumference of the circle : %g cm", 2*3.14*r);
    printf("The area of the circle : %g cm^2", 3.14*r*r);
}