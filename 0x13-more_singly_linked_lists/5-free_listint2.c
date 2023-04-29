#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: A pointer to a pointer to the head node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	if (*head == NULL)
	{
		return;
	}

	temp = *head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
