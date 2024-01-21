#include "monty.h"

/**
 * f_pall - prints all the stack
 * @head: head of the stack
 * @counter: not used here
 * Return: nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *head_stack;
	(void)counter;

	head_stack = *head;
	if (head_stack == NULL)
		return;
	while (head_stack)
	{
		printf("%d\n", head_stack->n);
		head_stack = head_stack->next;
	}
}
