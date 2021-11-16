#include "lists.h"
#include<stdlib.h>
/**
 * add_nodeint_end - add note at the end
 * @head: head of list
 * @n: content of node
 * Return: head of list or null if process failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *p;

if (*head == NULL)
{
return (NULL);
}
p =  (listint_t *)malloc(sizeof(listint_t));
if (p == NULL)
{
	printf("Error");
	return (NULL);
}
p = *head;
do {
p = p->next;
} while (p->next != NULL);
p->next = (listint_t *)malloc(sizeof(listint_t));
if (p->next == NULL)
{
printf("new adrees did not get allocated");
free (p->next);
return (NULL);
}
p->next->n = n;
return (p->next);
}



