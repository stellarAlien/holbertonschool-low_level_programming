#include "lists.h"
#include<stdlib.h>
/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: head of list
 * @idx: index of node
 * @n: int
 *Return:adress of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *p, *nw;
unsigned int i;

i = 0;
if (*head == NULL)
{
	return (NULL);
}
nw = (listint_t *)malloc(sizeof(listint_t));
if (nw == NULL)
{
	return (NULL);
	printf("ERROR");
	free(nw);
}
p = *head;
while (p != NULL)
{
if (i == idx)
{
	nw->next = p->next;
	nw->n = n;
	p->next = nw;
	return (nw);
}
p = p->next;
i++;
}
if (p == NULL || idx > i)
{
return (NULL);
free(nw);
}
return (NULL);
}
