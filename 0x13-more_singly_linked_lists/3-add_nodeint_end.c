#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a
 * listint_t list
 * @head: head of the linked list
 * @n: node element
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *result = malloc(sizeof(listint_t));
	listint_t *tail;

	/* from the tail / end of the list */
	tail = *head;

	/* if malloc returns null, return NULL */
	if (result == NULL)
		return (NULL);

	/*add a new node */
	result->n = n;
	result->next = NULL;
	if (*head == NULL)
	{
		/* the result becomes the new head */
		*head = result;
		/* and return the address of the new element */
		return (*head);
	}
	if (*head != NULL)
	{
		/* move the tail */
		while (tail->next != NULL)
			tail = tail->next;
	}

	tail->next = result;
	/* and return the address of the new element */
	return (*head);
}
