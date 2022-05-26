#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: head of the linked list.
 * Return: if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int result;

	/* initialize the result */
	result = 0;

	/* if the linked list is empty, return 0 */
	if (!head)
	{
		return (0);
	}

	while (head)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
