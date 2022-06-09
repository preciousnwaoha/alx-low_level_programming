#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * 
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int nn = 0;
	while (n > 10)
		n = n / 10;

	nn = n % 10;
	_putchar(nn);
	return (0);
}
