/****************************************************************************
 * James Ball
 * Project Euler #1, C++
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6, and 9. The sum of these multiples is 23. Find the sum of 
 * all multiples of 3 and 5 below 1000.
 ***************************************************************************/
#include <iostream>

#define LIMIT 1000

int main(int argc, char *argv[])
{
  // iterating through only multiples is faster than evaluating every
  // integer under 1000
  int i3 = 3;
  int i5 = 5;
  int sum = 0;
  while (i3 < 1000)
    {
      // don't add multiples twice
      if (i3 % 5 != 0)
	sum += i3;
      i3 += 3;

      if (i5 < 1000) {
	sum += i5;
	i5 += 5;
      }
    }

  std::cout << "C++ sum is " << sum << "\n";
  return 0;
}
