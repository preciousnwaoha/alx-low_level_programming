#include "main.h"

/**
 * _abs - prints absolute value of number
 * @ab: The number in question
 * Return: Always 0 (Success)
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
