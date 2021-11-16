#include"lists.h"
/**
 * get_nodeint_at_index - gets node int at index
 * @head: head of list
 *@index: index of node
 *Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *p;
unsigned int i;

p = head;
i = 0;
while (p)
{
if (i == index)
	return (p);
i++;
p = p->next;
}
if (index > i)
return (NULL);
}
