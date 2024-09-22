#include <stdio.h>

int LogicalOR(int a, int b)
{

}

int LogicalAND(int a, int b)
{

}

int main()
{
    int x, y, option;
    printf("Enter the Numbers : ");
    scanf("%d %d", &x, &y);
    printf("Enter the Operation you want to do : \n1) Logical AND (&&)\n2) Logical OR  (||)");
    scanf("%d", &option);
    switch(option)
    {
        case 1:
            printf("Logical AND (%d, %d) : %d", x, y, LogicalAND(x, y));
        case 2:
            printf("Logical OR (%d, %d) : %d", x, y, LogicaOR(x, y));
    }
}
