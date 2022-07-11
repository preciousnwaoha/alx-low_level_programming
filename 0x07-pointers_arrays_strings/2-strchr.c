#include <stdio.h>

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
	int length;

	length = sizeof(s) / sizeof(s[0])

	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}

	return ("\0");

}
