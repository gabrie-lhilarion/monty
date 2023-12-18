#include "monty.h"
/**
 * push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (program_data.argument)
	{
		if (program_data.argument[0] == '-')
			j++;
		for (; program_data.argument[j] != '\0'; j++)
		{
			if (program_data.argument[j] > 57 || program_data.argument[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(program_data.file_pointer);
			free(program_data.line_content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(program_data.file_pointer);
		free(program_data.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(program_data.argument);
	if (program_data.stack_flag == 0)
		addnode(head, n);
	 
}