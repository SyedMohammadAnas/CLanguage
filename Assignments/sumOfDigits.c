#include<stdio.h>
void main(){
    int m, s;
    printf("Enter the 4 Digit number : ");
    scanf("%d", &m);
    s = (m%10)+((m/10)%10)+((m/100)%10)+((m/1000)%10);
    printf("The sum of the digits of the number : %d", s);
}