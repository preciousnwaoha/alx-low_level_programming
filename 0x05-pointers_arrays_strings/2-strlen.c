#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string in question.
 *
 * Return: no of characters in string.
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
