#include "lists.h"
/**
 *add_dnodeint - returns a list with new head
 *@head: head adress
 *@n: data
 *Return: dlistint_t *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p = (dlistint_t *)malloc(sizeof(dlistint_t));

	if((p == NULL) || (*head == NULL))
	{
		return(NULL);
	}
	p = *head;
	(*head)->next = p;
	p->n = (*head)->n;
	(*head)->n = n;
	return(*head);
}
	

