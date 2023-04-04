#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * Description: str needs to be duplicated
 * @head: pointer to the head
 * @str: pointer to the str
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *fkr;
	char *dup_str;
	int len;

	fkr = malloc(sizeof(list_t));
	if (fkr == NULL)
	{
		return (NULL);
	}

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(fkr);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	fkr->str = dup_str;
	fkr->len = len;
	fkr->next = *head;

	*head = fkr;

	return (fkr);
}
