#include "monty.h"

/**
  *f_rotl - rotates the stack to the top
  *@head: head of the stack
  *@counter: number of line
  *Return: nothing
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *head_tmp;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	head_tmp = (*head)->next;
	head_tmp->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = head_tmp;
}
