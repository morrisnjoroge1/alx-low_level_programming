#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: pointer to the hash table.
 * @key: key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *entry;
	unsigned long int i;

	/*check if key is empty*/
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/*compute i at which value /key is to be stored in array*/
	i = key_index((const unsigned char *)key, ht->size);
	/*Search the linked list at the specified i for the key*/
	if (i >= ht->size)
		return (NULL);

	entry = ht->array[i];
	while (entry && strcmp(entry->key, key) != 0)
		entry = entry->next;

	/*if key was not found return NULL*/
	return ((entry == NULL) ? NULL : entry->value);
}
