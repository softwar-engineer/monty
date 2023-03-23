#include "monty.h"

/**
 * free_global - frees the global stack from the memory
 * Return: void
 */
void free_global(void)
{
	stack_t *to_free;
	stack_t *temp = NULL;

	to_free = *global_head;

	while (to_free)
	{
		temp = to_free->next;
		free(to_free);
		to_free = temp;
	}
}
