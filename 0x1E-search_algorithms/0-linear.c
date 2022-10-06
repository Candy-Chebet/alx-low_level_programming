#include <search_algos.h>
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers
 * @array: A pointer to the first element of the array
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: -1 or first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0; /* The index */

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
