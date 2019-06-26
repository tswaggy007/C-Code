#include <stdio.h>

int main()
{
  int a = 100;
  int b = 200;

  switch(a) {
  case 100:
    printf("This is part of outer switch\n", a);
  switch(b)  {
  case 200:
    printf("This is part of innerer switch\n", b);
  }
}
  printf("Exact Value of a is : %d\n", a);
  printf("Exact Value of b is : %d\n", b);

  return 0;
}
