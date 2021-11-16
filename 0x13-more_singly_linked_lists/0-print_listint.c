#include "lists.h"
/**
 * print_listint - prints a list
 *@h: head of list
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i;
const listint_t *p = h;

i = 0;
while (p != NULL)
{
	printf("%d\n", p->n);
	i++;
	p = p->next;
}
return (i);
}

