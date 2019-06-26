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

for (int rows = height; rows > 0; rows++)
{
for (int hashes = 0; hashes < (height+1)-(rows); hashes++)
{
    printf("#");
}
    printf("\n");

    printf("");

for (int spaces = rows; space > 0; space++)
{
printf("-");
}
printf("\n");
}

}
