#include "lists.h"
/**
 * node_len - determines count of nodes
 * @h: head of list
 * Return: int
 */
unsigned int node_len(dlistint_t **node)
{
	unsigned int len = 0;
	dlistint_t *start;

	start = *node;
	while (start != NULL)
	{
		len += 1;
		start = start->next;
	}
	return (len);
}
/**
 * insert_dnodeint_at_index - inserts a node at a certain index
 * @h: head of list
 * @idx: index
 * @n: data
 * Return: adress of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p, *tmp;
	unsigned int i, len;

	len = node_len(h);
	if(idx > len)
		return (NULL);
	if(idx == 0)
		return(add_dnodeint(h, n));
	else if (idx == len)
		return(add_dnodeint_end(h, n));
	while( i < (idx -1) && p != NULL)
	{
		if (p == NULL )
		{
			return(NULL);
		}
		i++;
		p = p->next;
	}
	if(i == idx -1)
	{
	tmp = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!(tmp))
		return (NULL);
	tmp->next = p->next;
	tmp->n = n;
	tmp->prev = p;
	p->next = tmp; 
	p->next = tmp;
	return (tmp);
	}
	return(NULL);
}
