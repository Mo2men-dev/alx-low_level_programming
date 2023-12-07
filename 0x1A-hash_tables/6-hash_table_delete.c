#include "hash_tables.h"

/**
 * hash_table_delete - Delete the hash table.
 * @ht: Hash table.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (node != NULL)
			{
				node = ht->array[i]->next;
				free(node->key);
				free(node->value);
				free(node);
				ht->array[i] = node;
			}
		}
	}
	free(ht->array);
	free(ht);
}
