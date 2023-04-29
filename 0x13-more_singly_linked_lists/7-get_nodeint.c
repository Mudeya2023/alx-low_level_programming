#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head:address of 1st nodw
 * @index:index of the node, starting at 0
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int h;
	listint_t *temp;

	temp = head;
	h = 0;
	while (temp != NULL && h < index)
		/**
		 * incase index is larger than nodes
		 */
	{
		temp = temp->next;
		h++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
