#include "monty.h"

/**
 * f_rotl - rotates the stack to the top.
 * @stack: top of stack
 * @line_number: line number
 *
 * Return: void
 */
void f_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *head;
	(void) line_number;

	if (!stack || !(*stack) || !(*stack)->next)
		return;
	head = *stack;
	temp = *stack;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = head;
	*stack = head->next;
	head->prev = temp;
	head->next = NULL;
}
