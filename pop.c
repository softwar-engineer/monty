#include "monty.h"

/**
 * f_pop - removes the top element of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: line number
 *
 * Return: void
 */
void f_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	node = *stack;
	*stack = (*stack)->next;
	free(node);
}
