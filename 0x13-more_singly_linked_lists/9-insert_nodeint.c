#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head:address of the 1st node
 * @idx:index of the list where the new node should be added. Index starts at 0
 * @n:data for the new node
 * Return:the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int h;
	listint_t *temp;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	h = 0;
	while (temp != NULL && h < idx - 1)
	{
		temp = temp->next;
		h++;
	}
	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
