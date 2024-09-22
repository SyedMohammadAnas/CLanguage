#include <stdio.h>
#define MAX 100
int main()
{
    char new1[MAX];
    char new2[MAX];
    printf("Enter the First Number : ");
    scanf("%s", &new1);
    printf("Enter the Second Number : ");
    scanf("%s", &new2);

    int new11 = (int)new1;
    int new22 = (int)new2;

    char new3[MAX] = (char)(new11*new22);
    printf("The Long Multiplication : %s", new3);

}
