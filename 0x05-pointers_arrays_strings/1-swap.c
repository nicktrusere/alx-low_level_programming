#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: the first entry
 * @b: the second entry
 *
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
