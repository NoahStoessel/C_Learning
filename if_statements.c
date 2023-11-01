#include <stdio.h>
#include <string.h>
int main(){
    // If On Ints
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age == 15){
        printf("Ok \n");
    }
    else{
        printf("No \n");
    }
    // Comparing strings
    char name[25];
    printf("Enter your name: ");
    scanf("%s", &name);

    if(strcmp(name, "Noah") == 0){
        printf("Hi Noah! \n");
    }
    else{
        printf("Your not me! \n");
    }
    return 0;

}