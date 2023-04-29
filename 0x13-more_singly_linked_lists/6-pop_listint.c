#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head:address of first node
 * Return:the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int data_n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	data_n = temp->n;
	free(temp);
	return (data_n);
}
