#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: number in question
 *
 * Return: 1 if n is positive, 0 if n is zero and -1 if n is negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar("-");
		return (-1);
	}
	else if (n > 0)
	{
		_putchar("1");
		return (1);
	}
	else
	{
		_putchar("0");
		return (0);
	}
}
