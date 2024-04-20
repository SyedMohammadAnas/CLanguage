#include<stdio.h>
void main(){
    float fa;
    printf("Enter the temperature (in oF) : ");
    scanf("%f", &fa);
    printf("%g oF in Celcius degree is : %g oC", fa, 5.0/9*(fa-32));
}