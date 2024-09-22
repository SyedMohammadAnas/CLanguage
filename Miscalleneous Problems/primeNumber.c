#include<stdio.h>
void main(){
    int n, facCount = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            facCount ++;
        }
    }
    if (facCount == 2){
        printf("Given number is a PRIME NUMBER.");
    }
    else{
        printf("Given number is NOT A PRIME NUMBER.");
    }
}