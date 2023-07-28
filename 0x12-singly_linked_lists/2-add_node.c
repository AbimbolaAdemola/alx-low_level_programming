#include "list.h"
#include <stdlib.h>

/**
 * * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
	int lents = 0;

	/* Loop through the string until the null terminator is encountered */
	while (s[lents] != '\0')
	{
		lents++;
	}
	return (lents);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the input string and store it in the new node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculate the length of the string and store it in the new node */
	new_node->len = _strlen(str);

	/* Insert the new node at the beginning of the list */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
