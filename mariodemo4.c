#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  int h;
  int s;
  int ha;

  do

{
  printf("Height:");
  n = get_int();
}

while(n > 23 || n < 0);

if(n <= 23 && n > 0)

for (h = 1; h <= n; h++)
{

    for (s = (n-1); s >= 0; s--)


     {

      printf("");

      }
    for (ha = 0; ha <= h; ha++)
{

      printf("#");
}

      printf ("\n");

}

}
