#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // seed generation
    srand(time(0));
    // getting random number
    int random_number = (rand() % 10) + 1;// modulus sets range from 0-10 +1 removes zero
    printf("The number is: %d", random_number);
    return 0;
}
