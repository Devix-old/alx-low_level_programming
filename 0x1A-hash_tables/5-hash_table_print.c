#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i;
	int counter;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (counter > 0)
				printf(", ");

			printf("\'%s\': \'%s\'", temp->key, temp->value);
			temp = temp->next;
			counter++;
		}
	}
	printf("}\n");
}
