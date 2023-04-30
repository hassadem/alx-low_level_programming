#include "lists.h"

/**
 * add_nodeint - function to add node at the beginning
 * @n: position to add the node
 * @head: pointer to the node
 *
 * Return: element of node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node =  malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
