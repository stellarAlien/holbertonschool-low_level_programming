#include "lists.h"
#include <stdlib.h>
/**
 *free_list - frees linked list
 *@head: head of list
 *thought of recursive soulution but i don't want to try it here
 */
void free_list(list_t *head)
{
list_t *current, *next;

current = head;
while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}
