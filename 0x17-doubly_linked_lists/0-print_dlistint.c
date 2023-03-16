#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 *print_dlistint - prints all the elements of a list
 *@h: pointer to the head of the list
 *
 *Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
	{
		printf("No elements in this list\n");
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
