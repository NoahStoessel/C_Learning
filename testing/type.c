#include <stdio.h>

int main() {
    // Declare a variable
    // Replace 'your_variable' with the name of your variable
    // This is an example variable, please replace it with your variable name
    // For example: int your_variable;
    // Change the variable type to the type you want to check
    int your_variable = 150000;

    // Check if the variable is of type int
    if (sizeof(your_variable) == sizeof(int)) {
        printf("The variable is of type int.\n");
    } else {
        printf("The variable is not of type int.\n");
    }

    return 0;
}