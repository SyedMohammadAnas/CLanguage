#include<stdio.h>
void main(){
    int n, p = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (n >= 1){
        p *= n;
        n--;
    }
    printf("factorial : %d", p);
}