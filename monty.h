#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - struct representing doubly linked list
 * @n: integer
 * @prev: pointer to the previous element of the stack (or queue)
 * @next: pointer to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO 
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct data_info - Information container for program data
 * @argument: value
 * @file_pointer: pointer to monty file
 * @line_content: line content
 * @stack_flag: flag to change stack <-> queue
 * Description: Carries values through the program
 */
typedef struct data_info
{
    char *argument;
    FILE *file_pointer;
    char *line_content;
    int stack_flag;
} data_info_t;

extern data_info_t program_data;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(stack_t **head, unsigned int number);
void pall(stack_t **head, unsigned int number);


#endif