#include "hash_tables.h"
/**
 * hash_table_set - This function insert a element in a table
 * @ht: the table where the element will be set
 * @key: the key of the element
 * @value: the value of the element
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || strcmp(key, "") == 0 || value == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	/*case of empty slot */
	if (ht->array[index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		ht->array[index] = new_node;
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		return (1);
	}
	/*Here we want to change to value of the slot (same key)*/
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	temp = ht->array[index];
	while (temp)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key), new_node->value = strdup(value);
		new_node->next = temp, ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
