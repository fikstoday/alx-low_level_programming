#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * length - str lenght
 * @str: pointer to char
 *
 * Description: return the length of str
 * Return: int length
 */
int length(char *str)
{
	int len = 0;

	while(*str)
	{
		str++;
		len++;
	}
	return (len);
}
/**
 * add_node_end - add node at end
 * @head: pointer to pointer
 * @str: pointer to char
 *
 * Description: at end of linked list, at a new node
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = NULL;
	int str_len;
	/*list_t *last = *head;*/
	list_t **last = head;

	node = (list_t *)malloc(sizeof(list_t));
	if (node ==  NULL)
	{
		return (NULL);
	}
	str_len = length(strdup(str));
	node->str = strdup(str);
	node->len = str_len;
	node->next = NULL;
	/*
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = node;
	*/
	while (*last)
	{
		last = &(*last)->next;
	}
	*last = node;
	return (node);
}
