#include<stdio.h>
void main(){
    int n, factorsSum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int temp = n;
    temp -= 1;
    for (int i = 1; i <= temp; i++){
        if (n % i == 0){
            factorsSum += i;
        }
    }
    if (factorsSum == n){
        printf("the number %d is a perfect number", n);
    }
    else{
        printf("the number %d is not a perfect number", n);
    }
}