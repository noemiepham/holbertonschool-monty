#include "monty.h"
/**
 * _pop - remove  the value at the top of the stack
 * @head_stack: pointer to node
 * @line_number:number of line option code
 */
void _pop(stack_t **head_stack, unsigned int line_number)
{
	stack_t *cursor;

	cursor = *head_stack;
	UNUSED(line_number);

	if (head_stack == NULL || *head_stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*head_stack = cursor->next;
	if (*head_stack != NULL)
		(*head_stack)->prev = NULL;
	free(cursor);
}
