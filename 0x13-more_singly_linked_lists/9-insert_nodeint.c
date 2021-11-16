#include "lists.h"
#include<stdlib.h>
/**
 * insert_nodeint_at_index
 * @head: head of list
 * @idx: index of node
 * @n: int
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
}
while (i < idx && p != NULL)
{
p = p->next;
i++;
}
if (p == NULL)
{
return (NULL);
free(nw);
}
nw->next = p->next;
nw->n = n;
p->next = nw;
return (nw);
}
