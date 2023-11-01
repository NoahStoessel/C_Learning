#include <stdio.h>
#include <string.h>
// function prototype declaration with types
void clear(char[], int);


// Creating a function
void test(){
    printf("test\n");
    printf("\n testing testing");
}
// now how do you add arguments to functions
// like this
void greet(char name[]){ // preceede any argument with its type
    printf("\nHello %s", name);
}
int add(int x, int y){ // if returning lets say a double precede your function with double so double create(){}
    return x + y; 
}
// more function prototyoes
// test
int main(){
    // functions in c
    test();
    int result = add(15, 32);
    // functions are code blocks that can be run at any time
    char name[25];
    printf("Enter your name: ");
    scanf("%s", &name);
    greet(name);
    printf("\n %d", result);
    return 0;
}
// function prototypes
void open(char state[]){
    printf(state);
    if(strcmp(state, "Open") == 0){
        printf("\nClose");
    }
    else{
        printf("\n Open");
    }
//  only make prototypes under main
// just checks if arguments are used correctly or not and if they have a matching type but are written diferently
void clear(char oem[], int return_error){// you provide just types that are gonna be passed then use the name of passed var
    printf("\n Clear");
  }
