#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int lastKey;
	hash_node_t *printer;

	if (ht == NULL)
		return;
	lastKey = ht->size - 1;
	while (!ht->array[lastKey] && lastKey != 0)
		lastKey--;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		printer = ht->array[i];
		while (printer)
		{
			printf("'%s': '%s'", printer->key, printer->value);
			if (i != lastKey)
				printf(", ");
			printer = printer->next;
		}
	}
	printf("}");
	printf("\n");
}
6-hash_table_delete.c
#include "hash_tables.h"
/**
 * hash_table_delete - deletes and frees hash table
 * @ht: hash table to beat
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *freer, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		freer = ht->array[i];
		while (freer)
		{
			tmp = freer->next;
			free(freer->key);
			free(freer->value);
			free(freer);
			freer = tmp;
		}
	}
	free(ht->array);
	free(ht);

}
