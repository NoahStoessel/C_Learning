//vars
// allocated space in memory

#include <stdio.h>

int main(){
    // Declaring an integer
    // first you set the type
    // then the name
    int x;
    // then set the value
    x = 123;
    // better way because value is asigned at same line for user input use method one tho
    int y = 123456;
    int age = 1;
    // floats
    float gpa = 2.34050294;
    // char stores 1 character
    char grade = 'C';// C's
    char text[] = "Hello Lol";// technical array but still its a string
    // how to display values use format specifier
    // %d decimal
    // %s string
    // %c char
    // %f float
    // int
    int x = 1;
    // float
    float y = 1.11;
    // double = 2x accuracy float
    double r = 2.3090128998310983;
    // how to set number of digits displayed after decima
    // 4 after decimal
    printf("%0.4f", r);
    // char
    char z = 'C';
    // char but int decimal
    char o = 100; // aka decimal to ascii can be used as int -128 127
    // string
    char e[] = "Hi Hello Hi";
    // bool make sure to include std bool
    bool o = true;
    // print bool
    // %d
    // test
    // unsigned
    unsigned char test = 78; // 0 - 255
    // unsigned int
    unsigned int opener = 10001; // no minus cant add one %u for them unsigned
    // short ints
    short int idk = 1111111111;
    // long ints
    long int closed = 11111111111;
    // long long int
    // %lld
    // %llu unsigned
    long long int bro = 11111111111;
    printf("X is %d \n", y);
    printf("text is %s \n", text);
    printf("your grade is %c \n", grade);
    printf("Your gpa is %f", gpa);
    return 0;
}
