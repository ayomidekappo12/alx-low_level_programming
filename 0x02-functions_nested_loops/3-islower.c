#include "main.h"

/**
 * _slower - Entry point
 * @c: The character to be checked
 *
 * Return: 1 for lowercase character or 0 for anything else
 */

int _slower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
