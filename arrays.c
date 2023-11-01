#include <stdio.h>
#include <string.h>
int main(){
  // basic array
  int numbers[] = {1,2,3,4,5,6,7,8};
  // looping over an array
  for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
    printf("array1: %d \n", numbers[i]);
  }
  // 2d / 3d arrays
  int my_2d_array[4][4] = {
  {1,2,3},
  {1,2,3},
  {1,2,3},
  {}
  };
  my_2d_array[3][2] = 5;
  printf("\n my_2d_array: %d", my_2d_array[0][1]);
  // array of strings
  char words[][100] = {"foo", "bar", "baz", "idk", "tesla", "fuck amerima"};
  // adding an item
  strcpy(words[0], "tesla");
  // display arr of strings
  printf("\nAfter\n");
  for(int i = 0; i < sizeof(words) / sizeof(words[0]); i++){
    printf("%s\n", words[i]);
  }
  return 0;
}
