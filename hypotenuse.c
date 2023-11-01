#include <stdio.h>
#include <math.h>

int main(){
    double a;
    double b;
    double c;

    printf("Enter your first sides length: ");
    scanf("%lf", &a);

    printf("Enter your second sides length: ");
    scanf("%lf", &b);

    c = sqrt(a*a + b*b);
    printf("Hypotenuse length is: %lf", c);
    return 0;
}