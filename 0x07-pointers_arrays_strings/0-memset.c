#include <stdio.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: is the pointer with the memory address
 * @b: valuse to be filled into memory
 * @n: number of bytes of memory to be filled
 *
 * Return: A pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (memory);
}
