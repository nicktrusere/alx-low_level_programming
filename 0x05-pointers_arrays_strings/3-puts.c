#include "main.h"

/**
 * _puts - prints a string to the stdout followed by a new line
 * @str: the string input
 * Return: the length of the string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
