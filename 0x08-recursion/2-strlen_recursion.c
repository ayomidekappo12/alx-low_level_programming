#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: char arg
 *
 * Return: Always 0 (success)
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
