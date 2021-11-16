#include "lists.h"
#include<stdlib.h>
/**
 *  * free_listint2 - free a list
 *   * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	free(p);
}
