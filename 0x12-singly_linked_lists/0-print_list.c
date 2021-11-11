#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - print the element of the list
 * @h: head of the list
 * Return: the element of the list
*/

size_t print_list(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
if (h->str != NULL)
printf("[%d] %s\n", h->len, h->str);
else if (h->str == NULL)
printf("[0] (nil)\n");
i++;
h = h->next;
}
return (i);
}
