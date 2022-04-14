#include <stdio.h>
#include "function_pinters.h"
/**
 * array_iterator - function executes a function on array
 * @array: pointer to array
 * @size: number elements in array
 * @action: pointer to function
 * Return: nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int));
{
	uncigned int i;

	if (array != Null && size > 0 && action != Null)
	{
		for (i = 0; i < size; i++)
			action (array[i]);
	}
}
