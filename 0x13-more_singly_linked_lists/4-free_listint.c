#include "lists.h"
#include<stdlib.h>
/**
 * free_listint - free a list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
listint_t *p;

while (head != NULL)
{
p = head;
head = head->next;
free(p);
}
}
