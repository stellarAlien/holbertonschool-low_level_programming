#include "lists.h"
/**
 *list_len - returns chained list length
 *@h: head of list
 *Return: list len
 */
size_t list_len(const list_t *h)
{
size_t i;
const list_t *p = h;

	while(p->next != NULL)
	{
		i++;
		p = p->next;
	}
	/*free((void)(p));*/
	return (i);
}
