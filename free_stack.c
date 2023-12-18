#include "monty.h"
/**
* free_stack - frees stack
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *stk;

	stk = head;
	while (head)
	{
		stk = head->next;
		free(head);
		head = stk;
	}
}