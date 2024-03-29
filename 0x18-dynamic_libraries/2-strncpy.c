#include "main.h"

/**
 * _stncpy - copys a string with 
 * @dest: copt to
 * @src: copy from
 * @n: number of char to be copied
 * Returns: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
