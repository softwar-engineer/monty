#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack
 * @stack: double pointer to top of stack
 * @line_number: line number
 *
 * Return: void
 */
void f_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int len = 0, temp_n;

	temp = *stack;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	temp_n = temp->n;
	temp->n = temp->next->n;
	temp->next->n = temp_n;
}
