#include "main.h"

/**
 * print_rev - Prints a string in reverse and newline
 * @s: string.
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
