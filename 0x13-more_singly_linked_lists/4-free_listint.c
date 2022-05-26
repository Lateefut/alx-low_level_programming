#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *result;

	/* free nodes while head is not null */
	while (head != NULL)
	{
		result = head;
		/*move the list */
		head = head-> next;
		free(result);
	}
}
