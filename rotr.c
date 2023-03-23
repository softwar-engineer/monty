#include "monty.h"

/**
 * f_rotr - rotates the stact to the bottom
 * @stack: double pointer to the top of the stack
 * @line_number: line number
 *
 * Return: void
 */
void f_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void) line_number;

	if (!stack || !(*stack) || !(*stack)->next)
		return;

	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = *stack;
	temp->prev->next = NULL;
	temp->prev = NULL;

	(*stack)->prev = temp;
	(*stack) = temp;
}
