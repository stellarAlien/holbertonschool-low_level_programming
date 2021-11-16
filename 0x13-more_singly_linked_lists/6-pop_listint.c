#include "lists.h"
#include<stdlib.h>
/**
 * pop_listint - delete head of list
 * @head: head of list
 * Return: content of node
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *p;

if (*head == NULL)
{
	return (0);
}
n = (*head)->n;
p = *head;
*head = (*head)->next;
free(p);
return (n);
}
