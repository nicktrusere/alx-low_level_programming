#include "main.h"

/**
 * _strcpy - Copies the string pointed by src variable
 * @dest: the destiny
 * @src: the copy
 *
 * Return: the return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
