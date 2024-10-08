#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;
    int nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 - 100
    // printf("The number is %d\n", number);
    // Keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 to 100:\n ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Too high\n");
        }
        else if (guess < number)
        {
            printf("Too low\n");
        }
        else
        {
            printf("You guessed it in %d attempts.\n", nguesses);
        }
        nguesses++;
    } while (guess!= number);
    return 0;
}