#include<stdio.h>
void main(){
    int c, d;
    printf("Enter the two values : ");
    scanf("%d %d", &c, &d);
    c=c+d-(d=c);
    printf("After swapping c: %d, d: %d", c, d);
}