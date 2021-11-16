#include "lists.h"
#include<stdlib.h>
/**
 * add_nodeint - adds a node in at the beginning of list
 * @head: head of list
 * @n:content of node
 * Return: new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p;

p = (listint_t *)malloc(sizeof(listint_t));
if (p == NULL)
{
	printf("Error");
	return (NULL);
}
else
{
	p->n = n;
	p->next = *head;
	*head = p;
}
return (*head);
}



