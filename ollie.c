#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char op;
    double first, second;
  printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("enter two seperate by a space \n");
    scanf("%lf %lf", &first,&second);

    if(op == '/' && second == 0.0){
        printf("Dumbass Ya Cant");
    return 0;
    if(op == '/' && first == 0.0)
    printf("You suck");
    return(0);

}

    switch(op){ 
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
    break;
    case '-':
    printf("%.1lf - %.1lf = %.1lf", first, second, first);
    break;
    case'*':
    printf("%.1lf * %.1lf = %.1lf", first second, first * second);
    break;
    case '/':
    printf("%.1lf / %.1lf = %.1lf", first, second, first / second); 
    break;
    default:
    printf("Retard");
    break;
    
    } 
    return 0;
}