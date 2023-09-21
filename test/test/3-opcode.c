#include "monty.h"
/**
 * stack - sets the format of the data to a stack (LIFO).
 * This is the default behavior of the program.
 * @stack: stack
 * @line_number: file line count
 * Return: Nothing
*/
void stack(stack_t **stack __attribute__((unused)), unsigned int line_number)
{
	(void)line_number;
	return;
}
/**
 * queue - sets the format of the data to a queue (FIFO).
 * @stack: stack
 * @line_number: file line count
 * Return: Nothing
*/
void queue(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int arr[1024];
	int i = 0;

	stack_t *last = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (last->next)
		last = last->next;
	while (last)
	{
		arr[i] = last->n;
		i++;
		last = last->prev;
	}
	while (temp)
	{
		temp->n = arr[i];
		i--;
	}
}