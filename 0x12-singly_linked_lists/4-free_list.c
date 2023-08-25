#include "lists.h"

/**
 * free_list - Frees a list_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function iterates through the linked list and frees each node along
 * with its string. It uses a temporary pointer to keep track of the current
 * node before moving to the next node and freeing the previous one.
 */
void free_list(list_t *head)
{
    while (head != NULL) {
        list_t *temp = head;
        head = head->next;

        free(temp->str);
        free(temp);
    }
}
