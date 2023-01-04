#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: char arg
 *
 * Return: Alway 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
