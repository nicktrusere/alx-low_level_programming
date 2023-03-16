#include "lists.h"

/**
 *dlistint_len - prints all the elements of a list
 *@h: pointer to the head of the list
 *
 *Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
	{
		printf("No elements in this list\n");
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
