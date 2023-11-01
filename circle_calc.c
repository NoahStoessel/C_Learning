#include <stdio.h>

int main(){
    int radius;
    printf("Input your circle radius: ");
    scanf("%d", &radius);
    double circumference = 2 * 3.14159 * radius;
    printf("Your circles circumference is: %lf \n", circumference);
    double area = 3.14159 * radius * radius;
    printf("The area of your circle is: %lf", area);
    return 0;
    
}