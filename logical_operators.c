#include <stdio.h>
#include <stdbool.h>
int main()
{
    //logical operators
    // AND = &&
    // OR = ||
    // NOT = != or !
    float temp = 155;
    bool raining = true;
    if(temp >= 0 && temp != 155 && !raining){// and
        printf("Its perfect outside\n");
    }
    else{
        printf("Go code!");
    }

}