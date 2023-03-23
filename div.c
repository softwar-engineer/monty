#include "monty.h"

/**
 * f_div - divides the second top element by the top element
 * @stack: pointer to top of stack
 * @line_number: line number
 *
 * Return: void
 */
void f_div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int div;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	div = temp->next->n / temp->n;
	temp->next->n = div;
	*stack = temp->next;
	free(temp);
}
