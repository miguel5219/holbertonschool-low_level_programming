#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - star line
 * Return 0
 */

int main(void)
{
		int n;
		int Last_Digit;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		Last_Digit = n % 10;
		if (Last_Digit > 5)
		{
			printf("and is %d greater than %d\n", Last_Digit);
		}
		else if (Last_Digit == 0)
		{
			printf("is %d and is %d\n", Last_Digit);
		}
		else(Last_Digit <! 0)
		{
			printf("and is %d less than %d and not %d\n", Last_Digit)
		}
		

					return (0);
}
