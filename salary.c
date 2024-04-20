#include <stdio.h>
void main (){
    int rs;
    float gs;
    printf("Enter the Ramesh's salary : ");
    scanf("%d", &rs);
    gs = rs + 60.0/100*rs;
    gs += 40.0/100*rs;
    printf("\nGross salary of Ramesh is : %g ", gs);
}