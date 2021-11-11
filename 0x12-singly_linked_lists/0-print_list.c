#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *print_list - prints a linked list
 *@h: linked list
 *Return: 1 if  success else 0
 */
size_t print_list(const list_t *h)
{
size_t i, j;
const list_t *p = h; /*(list_t *)malloc(sizeof(list_t));*/
char *s;

	i = 0;
	p = h;
	/*s = h->str;*/
	while(p->next != NULL)
	{
	if (p->str == NULL)
	{
	printf("[0] (nil)");
	}
	else
	{
	j = 0;
	s = p->str;
	while(s[j] != '\0')
	{
	printf("%s", s);
	j++;
	}
	}
	p = p->next;
	i++;
	}
	return (i);
}

