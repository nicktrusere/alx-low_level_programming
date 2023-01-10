#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of size size and assign char c
 * @size: size of array to be allocated
 * @c: char to initialize array
 * Description: create array of size size and assign char c
 * Return: Pointer to the array, Null if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count = 0;

	if (size == 0)
		return (NULL);

	arr = (char *)(malloc(size * sizeof(char)));

	if (!arr)
		return (NULL);

	while (count < size)
	{
		arr[count] = c;
		count++;
	}
	return (arr);
}
