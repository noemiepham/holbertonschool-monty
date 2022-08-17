#include "monty.h"
/**
 * _push - push int to a stack
 * @head_stack: pointer to begin list
 * @line_number: number of line option code
 */
void _push(stack_t **head_stack, unsigned int line_number)
{
	stack_t *new_node;

	UNUSED(line_number);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = var_global.push_arg;
	new_node->next = *head_stack;
	new_node->prev = NULL;
	if (*head_stack != NULL)
		(*head_stack)->prev = new_node;
	*head_stack = new_node;
}