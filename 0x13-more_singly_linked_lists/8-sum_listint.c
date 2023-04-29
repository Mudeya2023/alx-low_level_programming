#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t .
 * @head:address of 1st node
 * Return:the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
