#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: parameter
 * Return: returns a character
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'a')
			str[index] -= 32;
	}

	return (str);
}
