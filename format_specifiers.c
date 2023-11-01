#include <stdio.h>

int main()
{
    /*
    format specifiers
    %s string
    %f float
    %lf double
    %d integer
    %.1 decimal precision
    Extra
    %1 minimum field width
    %- left align
    */
    float item = 5.75;
    float item2 = 535.4335;
    float item3 = 531.43;
    printf("Item1: %f", item);
    // display only two decimal digits
    printf("Item2: %.7f", item2);



    return 0;
}
