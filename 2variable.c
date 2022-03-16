#include <stdio.h>
int main()
{
  int a = 4;
  // int b=2.6; int 2.6 is not recommended because it is not integer
  float b = 4.4;
  char c = 'f';
  printf("the value of a is %d \n", a);
  printf("the value of b is %f \n", b - a);

  printf("the value of c is %c \n", c );
  return 0;
}
