#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: character to check
 *
 * Return: 1 if alphabet, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
