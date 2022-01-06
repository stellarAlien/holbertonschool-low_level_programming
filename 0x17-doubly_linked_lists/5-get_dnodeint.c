#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to head of doubly linked list
 * @index: given index
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;

	if (!head)
		return (NULL);
	for (i = 0; i < index && head->next; i++)
		head = head->next;
	if (i < index)
	{
		return (NULL);
	}
	return (head);
}
