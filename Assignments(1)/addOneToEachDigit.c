#include<stdio.h>
void main(){
    int m, n;
    printf("Enter the number : ");
    scanf("%d", &m);
    n = (((m/1000)+1)*1000)+(((m/100)%10+1)*100)+(((m/10)%10+1)*10)+((m%10+1));
    printf("The new number : %d", n);
}