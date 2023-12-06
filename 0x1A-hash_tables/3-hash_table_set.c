#include "hash_tables.h"

/**
 * set_node - mallocs a key/value pair to the hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 * Return: pointer to the new node.
 */
hash_node_t *set_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t *));

	if (node == NULL)
		return (NULL);

	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);

	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);

	strcpy(node->key, key);
	strcpy(node->value, value);

	return (node);
}

/**
 * set_key_value - (no collision) set key:value pair to first array element
 * @tb: pointer to the hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 * @index: the key's index.
 *
 * Return: the node, or NULL if failed.
 */
int set_key_value(hash_table_t *tb, const char *key,
		const char *value, unsigned long int index)
{
	hash_node_t *node = set_node(key, value);

	if (node == NULL)
		return (0);

	tb->array[index] = node;
	node->next = NULL;

	return (1);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: a pointer to the hash table array.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;
	node = ht->array[index];
	if (node == NULL)
	{
		return (set_key_value(ht, key, value, index));
	}
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (strcmp(node->value, value) == 0)
				return (1);
			free(node->value);
			node->value = malloc(strlen(value) + 1);
			if (node->value == NULL)
				return (0);
			strcpy(node->value, value);
			return (1);
		}
		node = node->next;
	}
	if (node == NULL)
	{
		node = set_node(key, value);
		if (node == NULL)
			return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	return (0);
}
