#include "hash_tables.h"

/**
 * hash_table_create - function that Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table  = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/*set size of hash table*/
	table->size = size;

	/*mem allocation for array of pointer to link list*/
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	/*initialize pointers to linked list*/
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	/* return pointer to newly created hash table*/
	return (table);
}
