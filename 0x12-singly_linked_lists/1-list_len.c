#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - return no of elements
 * @h: struct
 *
 * Description: print no of elements in a linked list
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;
	
	while(h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
