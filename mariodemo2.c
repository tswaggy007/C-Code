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

while(n > 23 || n < 0);

{

if(n <= 23 && n > 0)
{

for (int hashes = 0; hashes < n+1; hashes++)
{
  printf("#");

}

}

}


}
