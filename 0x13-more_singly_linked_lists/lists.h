#ifndef _LISTS_H
#define _LISTS_H

/**
 *  * struct listint_s - singly linked list
 *   * @n: integer
 *    * @next: points to the next node
 *     *
 *      * Description: singly linked list node structure
 *       *
 */
typedef struct listint_s
{
	    int n;
	struct listint_s *next;
} listint_t;
#include<stdio.h>
#include<stddef.h>
#include<string.h>

#endif
