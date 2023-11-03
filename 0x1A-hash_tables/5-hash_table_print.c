#include "hash_tables.h"

/**
 * hash_table_print - function that Prints a hash table.
 * @ht: pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	unsigned char c_flag = 0;
	hash_node_t *entry;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			entry = ht->array[index];
			while (entry != NULL)
			{
				printf("'%s: '%s'", entry->key, entry->value);
				entry = entry->next;
				if (entry != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
