#include"lists.h"
/**
 *  sum_listint - SUMS LIST
 *  @head: head of list
 *  Return: sum of list
 */
int sum_listint(listint_t *head)
{
listint_t *p;
int s;

if (head == NULL)
{
	return (0);
}
p = head;
s = 0;
while (p)
s += p->n;
return (s);
}
