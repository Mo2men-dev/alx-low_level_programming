#include "lists.h"

/**
 * sum_listint - Calculates the sum of all integer values in a linked list.
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The sum of all integer values in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}

