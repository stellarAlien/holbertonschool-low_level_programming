#include "lists.h"

/**
 * str_cnt - counts string length;
 *@str: string to check
 *Return: string length
 */
int str_cnt(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
	
/**
 *add_node - adds node to list
 *@head: head of node list
 *@str: string to insert
 *Return: adress of new elemnt or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *p;

if (str == NULL)
	return (NULL);
if (*head == NULL)
	return (NULL);
p = malloc(sizeof(list_t);
if (p == NULL)
return (NULL);
		p->str = strdup(str);
		 if (p->str == NULL)i
		 {
		 free(p);
		 return (NULL);
		 }
		 p->next = *h;
		p->len = str_cnt(str);
		*head = p;	
		return (p);
}
