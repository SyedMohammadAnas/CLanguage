#include<stdio.h>
void main(){
    int n, a = 0, b = 1, c;
    printf("Enter the limit : ");
    scanf("%d", &n);
    printf("Fibonacci series : ");
    for (int i = 1; i <= n; i++){
        printf("%d \n", a);
        c = a+b;
        a = b;
        b = c;
    }
}