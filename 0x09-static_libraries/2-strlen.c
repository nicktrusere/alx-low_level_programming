#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: the input string
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
