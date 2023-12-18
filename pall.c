#include "monty.h"
/**
 * pall - prints all values on the stack
 * @head: stack head
 * @counter: not in use
 * Return: void
*/
void pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}