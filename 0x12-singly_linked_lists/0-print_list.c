#include "main.h"
#include<stdio.h>
/**
 *print_list - prints a linked list
 *@h: linked list
 *Return: 1 if  success else 0
 */
size_t print_list(const list_t *h)
{
/*char *s;*/

	/*s = h->str;*/
	if (h->str == NULL)
	{
	printf("[0] (nil)");
	return (0);
	}
	printf("%s", h->str);
	return (1);
}

