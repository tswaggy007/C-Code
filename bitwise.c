#include <stdio.h>

int main()
{
  /*60= 0011 1100*/
  unsigned int a = 60;
  /*13= 0000 1101*/
  int b = 13;
  int c = 0 ;

/*the result is anb ie 0000 1100*/
  c = a & b;
  printf("Line 1 - Value of c is %d\n", c);
/*the result is aub i.e. 0011 1101*/
  c = a | b;
  printf("Line 2 - Value of c is %d\n", c);
  /*the result is flipping bits of a ie 1100 0011*/
  c = ~a;
  printf("Line 2 - Value of c is %d\n", c);
/*the result is copies the bit set in one operand but not the other ie 0011 0001*/
c = a ^ b;
printf("Line 2 - Value of c is %d\n", c);
/*the result is moving bits to left by the number specified ie 1111 0000*/
c = a << 2;
printf("Line 2 - Value of c is %d\n", c);
/*the result is moving bits to right by the number specified ie 1111 0000*/
c = a >> 2;
printf("Line 2 - Value of c is %d\n", c);
}
