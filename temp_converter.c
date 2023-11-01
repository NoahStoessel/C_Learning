#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    char second_unit;
    float temp;
    printf("\n Is the temperature in (F) or (C) or (K): ");
    scanf("%c", &unit);
    unit = toupper(unit);
    if(unit == 'C'){
        printf("\n Celsius Entered\n");
        printf("Enter the temp in celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\n The temp in farenheit is %.1f", temp);
    }
    else if(unit == 'F'){
        printf("\n Farenheit Entered\n");
        printf("Enter the temp in farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\n The temp in celsius is %.1f", temp);
    }
    else if(unit == 'K'){
        printf("\n Kelvin Entered");
        printf("\n Enter temp in kelvin: ");
        scanf("%f", &temp);
        printf("\n");
        printf("\n Convert to (F) or (C): ");
        scanf(" %c", &second_unit);
        // second_unit = toupper(second_unit);
        
        if(second_unit == 'C'){
            temp = temp -273.15;
            printf("\n The Temp is: %.1f", temp);
        }
        else if(second_unit == 'F'){
            temp = (temp - 273.15) * 9/5 + 32;
            printf("\n The Temp in F is: %.1f", temp);
        }
        else{
            printf("\n Error!");
        }

    }
    else{
        printf("\n Error!");
    }




    return 0;
}