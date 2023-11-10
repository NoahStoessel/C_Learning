#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char questions[][255] = {"Rust or golang is the best language", "answer A trust me", "What year did yo mama die", "Are you an anime fanboy"};
    char options[][255] = {"A) No ", "B) Yes",
    "A) Answer B pls", "B)Answer A pls",
    "A) 25 BCE", "B)IDK yesterday",
    "A)Nuh Uh", "B)Ja"};
    char answers[] = {'A', 'A', 'A', 'A'};

    int nofq = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    printf("############ QUIZ GAME ###########\n\n");

    for(int i = 0; i < nofq; i++){
        printf("##############################################\n");
        printf("%s \n", questions[i]);
        printf("##############################################\n\n");
        for(int j = (i * 2); j < (i * 2) + 2; j++){
            printf("%s \n", options[j]);
        }

        printf("\nEnter Your Guess: ");
        scanf("%c", &guess);
        fflush(stdin); // clearing input buffer

        if(toupper(guess) == answers[i]){
            printf("Correct Moving on!\n");
            score++;
        }
        else {
            printf("Incorrect!\n");
        }
        
    }
    printf("Your score is: %d", score);
    return 0;
}
