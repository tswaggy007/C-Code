#include <stdio.h>

/* Variable Declaration*/
extern int a, b;
extern int c;
extern float f;

int main()
{
/*variable definition*/
int a, b;
int c;
float f;

/*actual initialization*/
a = 20;
b = 30;

c = a + b;
printf("value of c : %d \n", c);


f = 70.0/3;
printf("value of f : %f \n", f);


return 0;
}
