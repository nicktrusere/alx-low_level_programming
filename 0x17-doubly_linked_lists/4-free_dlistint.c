#include "lists.h"

/**
 *free_dlistint - free a list
 *@head: header pointer
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
