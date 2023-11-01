#include <stdio.h>
#include <string.h>
int main(){
    /*
    int age;
    printf("How old are you: ");
    like this
    scanf("%d", &age);
    printf("Your are %d years old.\n", age);
    char name[25];
    printf("What is your name: ");
    scanf("%s", &name);
    printf("Your name is : %s \n", name);
    */
    //fgets
    // use when having spaced data
    char sentence[25];
    printf("Your sentence is: ");
    fgets(sentence, 25, stdin);
    sentence[strlen(sentence)-1] = '\0';
    // can add spaces in this one
    printf("Your sentence is: %s", sentence);
    return 0;
}