#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: chracter to check for
 *
 * Return: a pointer to the first occurence of the character
 * @c in the string or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + index);
	}

	return ('\0');
}
