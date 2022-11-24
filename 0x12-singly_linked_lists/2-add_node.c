#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * length - get str length
 * @str: pointer to char
 *
 * Description: get the length of a string
 * Return: int length
 */
int length(char *str)
{
	int i = 0;
	
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

/**
 * add_node - add a node
 * @head: pointer to pointer
 * @str: pointer to char
 *
 * Description: add a new node
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;
	int str_len;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	str_len = length(strdup(str));
	node->str = strdup(str);
	node->len = str_len;
	node->next = *head;

	*head = node;
	return (node);
}
