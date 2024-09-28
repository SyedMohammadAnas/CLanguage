#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);

    if(age <= 12)
        printf("You are a Child\n1. Play in the playground\n2.Do the Homework on time");
    else if(age > 12 && age <= 19)
        printf("You are a Teenager\n1.Make new friends\n2.Go on trips");
    else if(age > 19 && age <=35)
        printf("You are a Young Adult\n1.Make a Family\n2.Start a Business");
    else if(age > 35 && age <= 60)
        printf("You are an Adult\n1.Raise your children\n2.Increase your property");
    else
        printf("You are a Senior\n1.Tell stories to grandchildren\n2.Get family photosd");
}
