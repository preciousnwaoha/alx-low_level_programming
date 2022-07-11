#include <stdio.h>

/**
 * _memcpy - copies @n bytes from memory area src to
 * memory area dest
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *memory2 = dest;
	char *memory1 = src;

	for (i = 0; i < n; i++)
	{
		memory2[i] = memory1[i];
	}

	return (dest);
}
