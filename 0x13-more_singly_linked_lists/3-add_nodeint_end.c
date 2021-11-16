#include "lists.h"
#include<stdlib.h>
/**
 * add_nodeint_end - add note at the end
 * @head: head of list
 * @n: content of node
 * Return: head of list or null if process failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *Nd, *tmp;

Nd = malloc(sizeof(listint_t));
if (Nd == NULL)
return (NULL);
else
{
Nd->n = n;
Nd->next = NULL;
}
if (*head == NULL)
{
*head = Nd;
return (Nd);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = Nd;
return (Nd);
}
