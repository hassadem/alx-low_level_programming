#include "lists.h"

/**
 * free_listint - function to free node
 * @head: pointer to the node to freed
 *
 * Return: always 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
