#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t.
 * @head:address of 1st node
 * @index:index of the node that should be deleted. Index starts at 0
 * Return:Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int h;
	listint_t *temp;
	listint_t *delnode;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		delnode = *head;
		*head = (*head)->next;
		free(delnode);
		return (1);
	}

	temp = *head;
	h = 0;
	while (temp != NULL && h < index - 1)
	{
		temp = temp->next;
		h++;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	delnode = temp->next;
	temp->next = delnode->next;
	free(delnode);
	return (1);
}
