#include<stdio.h>
void main(){
    int t, sum = 0, temp;
    printf("Enter the number : ");
    scanf("%d", &t);
    int n = t;
    while(n > 0){
        temp = n % 10;
        sum = (sum*10) + temp;
        n /= 10;
    }
    if (t == sum){
        printf("%d is a palindrome number", t);
    }
    else{
        printf("%d is not a palindrome number", t);
    }
}