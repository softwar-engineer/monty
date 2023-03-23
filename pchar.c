#include "monty.h"

/**
 * f_pchar - prints the char at the top of the stack
 * @stack: pointer to top of stack
 * @line_number: line number
 *
 * Return: 0
 */
void f_pchar(stack_t **stack, unsigned int line_number)
{
	int num;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = (*stack)->n;
	if (num > 127 || num < 0)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", num);
}
