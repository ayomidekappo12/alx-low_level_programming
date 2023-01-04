#include "main.h"

/**
 * factorial - Entry point
 * @n: int arg
 *
 * Return: Always 0 (success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
