#include "lists.h"
/**
 * insert_node - check the code for
 * @head: start of linked list
 * @number: new integer
 * Return: Always 0.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *ptr = *head, *prev;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	if (ptr->n > number)
	{
		new->next = ptr;
		*head = new;
		return (new);
	}
	while (ptr->next)
	{
		if (ptr->n < number)
		{
			if (ptr->next->n > number || ptr->next->n == number)
				prev = ptr;
			ptr = ptr->next;
			continue;
		}
		new->next = ptr;
		prev->next = new;
		return (new);
	}
	ptr->next = new;
	return (new);
}