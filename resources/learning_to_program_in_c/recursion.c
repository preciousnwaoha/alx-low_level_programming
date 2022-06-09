#include <stdio.h>

int factorial(int num)
{
	int retval = 1;

	if (num != 0) {
		retval = num * factorial(num - 1);
	}

	return retval;
}

int main(void)
{
	int val = factorial(5);

	printf("%d! = %d\n", 5, val);

	printf("%d! = %d\n", 4, factorial(4));
}
