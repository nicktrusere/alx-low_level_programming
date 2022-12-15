#include "main.h"

/**
 * more_numbers - print more numbers
 *Return: returns nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; 1++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j = 9)
		{
			_putchar((j / 10) + '0');
		}
		_putchar((j % 10) + '0');
		}
		_putchar(10);
	}
}
