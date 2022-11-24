#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print linked list
 * @h: struct
 *
 * Description: receive a linked list and then print all nodes
 * Return: int length
 */
size_t print_list(const list_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		length++;
	}
	return (length);
}
