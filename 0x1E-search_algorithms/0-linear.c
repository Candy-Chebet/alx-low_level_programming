#include <stdio.h>
#include <search_algos.h>
// a function that linearly searches for a "value" in an array of integers
// where "array" is a pointer to the first element of the array
// "size" is the number of elements in array
// "value" is the value to search for
// The function must return where "value" is located
// If "value" is absent, or array is NULL, the function should return -1


int linear_search(int *array, size_t size, int value)
{
	int i;
	for (i = 0; i < size_t; i++)
		if (arr[i] == value)
			printf("Found %d at index: %d\n\n", array[i], i);
	else
	       if (array[i] == NULL)	
		return -1;
}
