#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);

    if(age <= 12)
        printf("You are a Child");
    else if(age > 12 && age <= 19)
        printf("You are a Teenager");
    else if(age > 19 && age <=35)
        printf("You are a Young Adult");
    else if(age > 35 && age <= 60)
        printf("You are an Adult");
    else
        printf("You are a Senior");
}
