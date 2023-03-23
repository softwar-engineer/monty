#include "monty.h"

/**
 * f_mul - mulitiplies teh second element with the top element
 * @stack: double pointer to top of the stack
 * @line_number: line number
 *
 * Return: void
 */
void f_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int mul;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	mul = temp->next->n * temp->n;
	temp->next->n = mul;
	*stack = temp->next;
	free(temp);
}
