#include <stdio.h>

#define LIMIT  4000000

int main()
{
  int x = 1, y = 1, z = 0, sum = 0;

  while ( 1 )
    {
      // get the next term
      z = x + y;
      // are we under the limit?
      if ( z  < LIMIT )
	{
	  // reassign x and y
	  x = y;
	  y = z;
	  // is z even?
	  if (z % 2 == 0)
	    sum += z;
	}
      else
	break;
    }

  printf("the sum is %d\n", sum);
}
