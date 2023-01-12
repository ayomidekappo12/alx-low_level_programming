#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: this is the lenght to allocate in the memory
 * @size: this is the size of casting to save
 *
 * Return: pointer to the allocated memory.
 *	if nmemb or size is 0, then _calloc returns NULL
 *	if malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = (nmemb * size);
	call = malloc(b);
	if (call == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		call[a] = 0;
	}
	return (call);
}
