#include "lists.h"

/**
 * dlistint_len - function that returns the length of a d linked list
 * @h: head for the list
 * Return: the lenght of list (int)
*/

size_t dlistint_len(const dlistint_t *h)
{
	int l = 0;
	const dlistint_t *temp = h; 
	while (temp != NULL)
	{
		temp = temp->next;
		l++;
	}
	return (l);
}
