#include "main.h"

/**
 * _islower - check is letter is lowercase
 * @c: the character to check
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
