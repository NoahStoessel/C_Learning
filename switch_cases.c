#include <stdio.h>

int main(){
    char sign;

    printf("\n Enter your sign: ");
    scanf("%c", &sign);

    switch(sign){
        case '+':
            printf("\n Addition");
            break;
        case '-':
            printf("\n Substraction");
            break;
        case '/':
            printf("\n Division");
            break;
        case '*':
            printf("\n Multiplication");
            break;
        case '^' :
            printf("\n Power");
            break;
        default:
            printf("\n Idiot nigga");
            break;
    }

    return 0;
}