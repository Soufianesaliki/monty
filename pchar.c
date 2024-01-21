#include "monty.h"

/**
 * f_pchar - prints a character in top stack, followed by a newline
 * @head: head of the stack
 * @counter: number of line
 * Return: nothing
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *head_stack;

	head_stack = *head;
	if (!head_stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (head_stack->n > 127 || head_stack->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head_stack->n);
}
