#include<stdio.h>
void main(){
    int min, max, p = 1, strong = 0;
    printf("Enter the minimum limit : ");
    scanf("%d", &min);
    printf("Enter the maximum limit : ");
    scanf("%d", &max);
    for (int i = min; i <= max; i++){
        int temp = i;
        while(temp <= max){
            p *= temp;
            temp++;
        }
        if (p == i){
            strong++;
        }
        p = 1;
    }
    printf("There is/are %d number of Strong numbers in between %d and %d", strong, min, max);
}