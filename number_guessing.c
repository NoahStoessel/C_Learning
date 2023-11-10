#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    const int MIN = 1;
    const int MAX = 100;

    int guess;
    int guesses;
    int answer;
    int guessed;
    int integerSize;
    srand(time(0));
    answer = (rand() % MAX) + MIN;
    printf("%d\n", answer);
    while(true) {
        printf("Guess the number clue: Its between 1-100: ");
        scanf("%d", &guess);
        if(guess == answer){
            printf("You won!\n");
            break;
        }
        else if(guess > answer){
            if(guesses == 25){
                printf("You have no more guesses\n");
                break;
            }
            printf("Too high!\n");
            guesses++;
            continue;
        }
        else if(guess < answer){
            if(guesses == 25){
                printf("You have no more guesses\n");
                break;
            }
            printf("Too low!\n");
            guesses++;
            continue;
        }
    }


    return 0;
}
