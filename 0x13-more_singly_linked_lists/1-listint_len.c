#include"lists.h"
/**
 *listint_len - determines list len
 *@h: head of list
 *Return: length of linked list or NULL if it doesn't exist
 */
size_t listint_len(const listint_t *h)
{
size_t i;
const listint_t *p;

if (h == NULL)
{
	printf("node doesn't exist");
}
p = h;
while (p != NULL)
{
	i++;
}
return (i);
}


