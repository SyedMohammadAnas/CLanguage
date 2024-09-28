#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void displayMenu(){
    system("cls");
    printf("Enter The OPERATION : \n");
    printf("A. Addition\n");
    printf("B. Subtraction\n");
    printf("C. Multiplication\n");
    printf("D. Division\n");
    printf("PRESS ESC TO EXIT");
}

void takeValue(int* n1, int* n2){
    system("cls");
    printf("Enter Number 1 : ");
    scanf("%d", n1);
    printf("Enter Number 2 : ");
    scanf("%d", n2);
}

void main(){
    int option, n1, n2, res, running = 0;
    while(!running){
        displayMenu();
        int key = getch();
        if(key != 27){
            switch(key){
                case 97: case 65:
                    takeValue(&n1, &n2);
                    res = n1 + n2;break;
                case 98: case 66:
                    takeValue(&n1, &n2);
                    res = n1 - n2;break;
                case 99: case 67:
                    takeValue(&n1, &n2);
                    res = n1 * n2;break;
                case 100: case 68:
                    takeValue(&n1, &n2);
                    res = n1 / n2;break;
                default:
                    printf("\nEnter Either the OPTIONS or ESC to exit!\n");
                }
            printf("The Result : %d", res);Sleep(3000);
        }
        if(key == 27){
            running = 1;
        }
    }
        printf("\nYou've Exited the Program");
        exit(0);
}
