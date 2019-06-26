#include <stdio.h>

int main()
{
  int a = 4;
  short b;
  double c;
  int* ptr;

  printf("Line 1 - Size of variable a = %ld\n", sizeof(a));
  printf("Line 2 - Size of variable b = %ld\n", sizeof(b));
  printf("Line 3 - Size of variable c = %ld\n", sizeof(c));

  /*pointer now contains the address of a*/
  ptr = &a;
  printf("value of a is %d\n", a);
  printf("*ptr is %d.\n", *ptr);

  //example of a ternary operator
  a = 10;
  b = (a == 1) ? 20: 30;
  printf("Value of b is %d\n", b);

  b = (a == 10) ? 20: 30;
  printf("Value of b is %d\n", b);


}
