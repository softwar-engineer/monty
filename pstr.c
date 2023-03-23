#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack
 * @stack: pointer to top of stack
 * @line_number: line number
 *
 * Return: void
 */
void f_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void) line_number;

	if (!stack || !(*stack))
	{
		printf("\n");
		return;
	}
	temp = *stack;
	while (temp != NULL)
	{
		if (temp->n > 127 || temp->n <= 0)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
