#include<stdio.h>
void main(){
    int n, i, sum = 0;
    printf("Enter the amount of times you wanna add : ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    printf("%d", sum);
} 