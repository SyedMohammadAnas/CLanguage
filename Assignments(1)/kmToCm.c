#include<stdio.h>
void main(){
    int km;
    printf("Enter the distance between the two cities(in KM): ");
    scanf("%d", &km);
    printf("Distance of %d in Meteres is : %d M", km, km*1000);
    printf("\nDistance of %d in Centieteres is : %d CM", km, km*100000);
}