#include <stdio.h>

void sort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

            }
        }
    }
}
void sort_char(char array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

            }
        }
    }
}



int main(int argc, char const *argv[])
{
    //int array[] = {1,4,2,5,35,7,4,8,3,8,4,6,4,23};
    char array[] = {'a', 'b', 'd', 'r'};
    int size = sizeof(array) / sizeof(array[0]);

    sort_char(array, size);
    for(int k = 0; k < size; k++){
        printf("%c, ", array[k]);
    }
    return 0;
}
