#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number's last digit result
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int nn;

	nn = (n % 10);

	if (nn < 0)
	{
		nn = (-1 * nn);
	}

	_putchar(nn + '0');
	return (nn);
}
