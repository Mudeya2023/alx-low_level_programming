#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h:head
 * Return:the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *temp;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
