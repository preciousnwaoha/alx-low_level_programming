#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = CHAR_MIN;
	while(c != CHAR_MAX){
		printf("%d\n", c);
		c = c+1;
	} exit(EXIT_SUCCESS);
	return (0);
}
