#include "lists.h"

/**
 * get_nodeint_at_index - to get the nth node of linked list
 * @head: pointer to point to the nth node
 * @index: index of the node
 *
 * Return: to return nth node if not exit return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}
