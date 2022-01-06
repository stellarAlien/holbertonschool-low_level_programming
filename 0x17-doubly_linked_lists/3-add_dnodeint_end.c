#include "lists.h"
/**
 * add_dnodeint_end - adds node at end
 * @head: head of list
 * @n: integer
 * Return: new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *Node, *p;

	Node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (Node == NULL)
		return (NULL);
	    Node->n = n;
	    Node->next = NULL;
		if (*head == NULL)
		{
			*head = Node;
			return (Node);
		}
		p = *head;
		while (p->next)
			p = p->next;
		p->next = Node;
		Node->prev = p;
		return (Node);
}
