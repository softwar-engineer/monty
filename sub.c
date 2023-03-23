#include "monty.h"

/**
 * f_sub - substracts the top element from the second element
 * @stack: pointer to top of stack
 * @line_number: line number
 *
 * Return: void
 */
void f_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int sub;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*stack = temp->next;
	free(temp);
}
