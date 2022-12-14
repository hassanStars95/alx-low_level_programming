#include "lists.h"
#include <stdio.h>


/**
 * list_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 * Return: numbers of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
