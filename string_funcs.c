#include <stdio.h>
#include <string.h>
int main(){
    char string1[] = "noah";
    char string2[] = "Stoessel";
    //basics
    // strlwr(string1) convert string to lowercase
    //strupr(string1) convert string to uppercase
    // strcat(string1, string2) concatenate 2 strings together no space
    //strcpy(string1, string2) copies content from string 2 into variable string 1 and deletes string 1
    //strncpy(string1,string2,4) copies a certain number of characters into string 1 like strcpy but with limit on characters coppied

    // replacement
    // strset(string1,"Y") set all characters in string to set char or letter
    //strnset(string1,"Y", 2) sets 2 of the characters in string 1 to Y
    // strrev(string1) reverses a string
    
    // comparison and info
    // strlen(string1) returns length of string
    // strcmp(string1, string2) compare two strings 0 = identical
    // strncmp(string1,string2,1) compare first character only
    // strcmpi(string1,string2) compare strings ignore upper or lower case
    // strncmpi(string1,string2,1) same as strncmp but ignores case

    return 0;
}