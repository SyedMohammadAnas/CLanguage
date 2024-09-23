#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number between (1 - 100) : ");
    scanf("%d", &n);
    if(n == 50)
        printf("Entered Number is exactly midpoint");
    else if(n == 1 || n == 100)
        printf("You've reached the extreme point");
    else if(n > 100 || n < 1)
        printf("The Number is out of Range!!, Try Again");
    else if(n < 50)
    {
        if(n > 25)
            printf("The number is between 25 and 50");
        else
            printf("The number is less than 25, Too Low!!");
    }
    else if(n > 50)
    {
        if(n < 75)
            printf("The number is between 50 and 75");
        else
            printf("The number is Greater than 75, Too High!!");
    }
}
