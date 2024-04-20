#include<stdio.h>
void main(){
    int m, n;
    printf("Enter the number : ");
    scanf("%d", &m);
    n = ((m%10))+((m/1000)%10);
    printf("The Sum of first and last number : %d", n);
}