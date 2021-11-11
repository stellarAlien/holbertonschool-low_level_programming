#include "lists.h"
#include<stdio.h>
/**
 *print_list - prints a linked list
 *@h: linked list
 *Return: 1 if  success else 0
 */
size_t print_list(const list_t *h)
{
int i;
const list_t *p = h;
/*char *s;*/
	
	i = 0;
	/*p = h;*/
	/*s = h->str;*/
	while(p->next != NULL)
	{
	if (p->str == NULL)
	{
	printf("[0] (nil)");
	}
	else
	{
	printf("%s", p->str);
	}
	p = p->next;
	i++;
	}
	return (i);
}

