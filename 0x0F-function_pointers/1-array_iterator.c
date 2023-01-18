#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Prints each array element on a newl
 * @array: array to iterate over
 * @size: size of array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
