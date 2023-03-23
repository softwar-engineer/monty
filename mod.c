#include "monty.h"

/**
 * f_mod - computes the rest of division of the second top element of
 * the stack by the top element of the stack
 * @stack: top of stack
 * @line_number: line number
 *
 * Return: void
 */
void f_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int mod;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	mod = temp->next->n % temp->n;
	temp->next->n = mod;
	*stack = temp->next;
	free(temp);
}
