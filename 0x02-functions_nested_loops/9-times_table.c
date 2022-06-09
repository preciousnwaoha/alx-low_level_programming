#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: times table
 * add extra space after single digit
 */
void times_table(void)
{
	int row, col, d;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			d = (row * col);
			_putchar(d);
			_putchar(',');
			_putchar(' ');

		}

		_putchar('\n');
	}
}
