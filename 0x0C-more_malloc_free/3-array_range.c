#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 * @min: this is the range min to allocate in the memory
 * @max: this is my range max to allocate in the memory
 *
 * Return: the pointer to the newly created array
 * if min > max, return NULL
 * if malloc fails, return null
 */

int *array_range(int min, int max)
{
	int a, b;
	int *range;

	if (min > max)
		return (NULL);

		b = min;
		range = (int *) malloc(sizeof(int) * (max - min + 1));
		if (range == NULL)
			return (NULL);
		for (a = 0; a <= (max - min); a++)
		{
			range[a] = b;
			b++;
		}
		return (range);
}
