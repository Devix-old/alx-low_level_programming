#include "hash_tables.h"
/**
 * hash_table_delete - this function delete entier hash table
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *current;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current->next;
			if (current->key != NULL)
				free(current->key);
			if (current->value != NULL)
				free(current->value);
			if (current != NULL)
				free(current);
			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
