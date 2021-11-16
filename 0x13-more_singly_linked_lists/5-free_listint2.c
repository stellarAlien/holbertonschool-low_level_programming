#include "lists.h"
#include<stdlib.h>
/**
 *  * free_listint - free a list
 *   * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *p;
	
	p = (*head)->next;
	*head = NULL;
	while(p)
	{
		*head = p;
		p = p->next;
		free(head);
	}
}
