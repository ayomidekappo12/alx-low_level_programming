#include "search_algos.h"
/**
* Write a function that searches for a value in an array
* of integers using the Linear search algorithm
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int mid;
	size_t i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = (size_t)left; i <= (size_t)right; i++)
		{
			printf("%d", array[i]);
			if (i != (size_t)right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
