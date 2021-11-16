#include "lists.h"
/**
 * pop_listint - delete head of list
 * @head: head of list
 * Return: content of node
 */
int pop_listint(listint_t **head)
{
int n;

n = (*head)->n;
*head = (*head)->next;
return (n);
}
