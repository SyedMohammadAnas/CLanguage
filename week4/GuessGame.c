#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int guessCount = 0, guessed = 0, yourGuess, random = rand() % 101, i;
    do
    {
        printf("Enter your Guess : ");
        scanf("%d", &yourGuess);
        int diff = (random - yourGuess);
        printf("%d\n", random);
        printf("%d", +diff);
        if(yourGuess == random)
            guessed = 1;
        else if(diff < 50)
        {
            if(diff < 30)
            {
                if(diff < 15)
                {
                    if(diff < 5)
                        printf("You are very close, Try Again!!!!\n");
                    else
                    printf("You are little bit close, Try Again!!!\n");
                }
                else
                    printf("You are somewhat close, Try Again!!\n");
            }
            else
                printf("You are very far away, Try Again!!\n");
        }
    } while (!guessed);

}
