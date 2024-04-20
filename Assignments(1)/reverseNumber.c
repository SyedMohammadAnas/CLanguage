#include<stdio.h>
void main(){
    int m, n;
    printf("Enter the number you want to reverse : ");
    scanf("%d", &m);
    n = ((m%10)*1000)+(((m/10)%10)*100)+(((m/100)%10)*10)+((m/1000)%10);
    printf("The reversed number : %d", n);
}