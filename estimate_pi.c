#include <stdio.h>

double circumference(double radius);
double estimate_pi(double radius);
// make sure to use functions and not prototypes here

int main(){
    
    double radius;
    printf("Enter your desired radius: ");
    scanf("%lf", &radius);
    double result = estimate_pi(radius);
    printf("\n ");
    printf("The estimated value of pi is: %lf", result);
    return 0;
}

double circumference(double radius){
    // printf("\n radius is: %lf", radius);
    return 2 * 3.1459 * radius;
}
double estimate_pi(double radius){
    // printf("\n radius is: %lf", radius);
    return circumference(radius) / (radius * 2);
}
