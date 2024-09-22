#include<stdio.h>
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n%2 == 0){
        printf("the number %d is Even", n);
    }
    else{
        printf("the number %d is odd", n);
    }
}