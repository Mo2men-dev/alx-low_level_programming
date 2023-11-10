#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of data of linked list
 * @head: head of the list
 * Return: the sum (int)
 * */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
