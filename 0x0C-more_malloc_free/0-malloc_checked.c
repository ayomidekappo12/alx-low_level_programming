#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Entry point.
 * @b: the lenght of memory to be allocated
 *
 * Return: Always 0 (success).
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
