#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *list_len - returns chained list length
 *@h: head of list
 *Return: list len
 */

size_t list_len(const list_t *h)
{
size_t i;
	i = 0;
	while(h)
	{
		i++;
		h = h->next;
	}
	return (i + 1);
}
