#include "hash_tables.h"

/**
 * hash_table_print - Print whole the hash table.
 * @ht: Hash table.
 *
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				flag = 1;
				node = node->next;
			}
		}
	}
	putchar('}');
	putchar('\n');
}
