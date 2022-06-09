#include <stdio.h>

/**
 * main - Entry point
 * @arg n is an integer of which you want the factorial
 *
 * Return - The factorial of n
 */

int factorial(int n)
{
	int retval = 1;

	while(n!=1) {
		retval *= n--;
	}

	return retval;
}

int main(void)
{
	int val = factorial(5);

	printf("%d! = %d\n", 5, val);

	printf("%d! = %d\n", 4, factorial(4));
}
