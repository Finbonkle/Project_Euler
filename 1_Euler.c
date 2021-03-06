/*********************************************************************************
 * James Ball
 * Problem 1, C
 * If we list all the natural numbers below 10 that 
 * are multiples of 3 or 5, we get 3, 5, 6, and 9.
 * The sum of these multiples is 23.
 * Find the sum of all multiples of 3 or 5 below 1000
 ********************************************************************************/
#include <stdio.h>

#define LIMIT 1000

int main(int argc, char *argv[])
{
  // Iterating values 1 through 999 is fine, but it would be faster to only look
  // at multiples of 3 or 5
  int i3 = 3;
  int i5 = 5;
  int sum = 0;
  while (i3 < LIMIT)
    {
      // don't repeat values
      if (i3 % 5 != 0)
	  sum += i3;
      i3 += 3;
      
      if (i5 < LIMIT) {
	  sum += i5;
	  i5 += 5;
	}
    }

  printf("Sum is %d\n", sum);
  return 0;
}
