#include<stdio.h>
void main(){
    int n, a = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int temp = n;
    while (temp > 0){
        int x = temp % 10;
        a += (x*x*x);
        temp /= 10;
    }
    if (n == a){
        printf("Given number %d is Armstrong Number", n);
    }
    else{
        printf("Given number %d is not an Armstrong Number", n);
    }
}