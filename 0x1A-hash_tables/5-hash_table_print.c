#include "hash_tables.h"
/**
 * HashtableEmpty - check if the hash-table is empty
 * @ht: The hash-table that we want to print
 * Return: True if empty False if not
 */
bool HashtableEmpty(const hash_table_t *ht)
{
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			return (false);
		}
	}
	return (true);
}
/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i;
	int counter;

	if (HashtableEmpty(ht))
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (counter > 0)
				printf(", ");

			printf("\'%s\' : \'%s\'", temp->key, temp->value);
			temp = temp->next;
			counter++;
		}
	}
	printf("}\n");
}
