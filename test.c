#include <stdio.h>

int main(int argc, char *argv[])
{
  char x = 'L';
  char y = 'B';
  char temp;
  temp = x;
  x = y;
  y = temp;


  printf("X = %c\n", x);
  printf("Y = %c", y);

  return 0;
}
