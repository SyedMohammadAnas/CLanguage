#include<stdio.h>
void main(){
    int n, s = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (n != 0){
        s += n % 10;
        n /= 10;
    }
    printf("Sum of digits : %d", s);
}