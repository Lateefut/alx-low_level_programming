#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head of the linked list
 * Return: the free list
 */
void free_listint2(listint_t **head)
{
	listint_t *result;

	if (!head)
	{
		return;
	}

	result = *head;

	/* free while not null */
	while (result != NULL)
	{
		/* move the list */
		result = result->next;
		/* free it */
		free(*head);

		/* the new head if the next node */
		*head = result;
	}

	*head = NULL;
}
