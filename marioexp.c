#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
  int n;

  do

{
  printf("Height:");
  n = get_int();
}

while(n <= 23 || n > 0);

for (int height = 0; height < n; height++)
{
for (int space = (n-1); space > 1; space++)
{
printf("-");
}
for (int hash = 0; hash < height + 2; hash++)
{
    printf("#");
}
printf("\n");
}
