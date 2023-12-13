#include "monty.h"

/**
* run - runs the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/

int run(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t op_array[] = {
				{"push", fpush}, {"pall", fpall}, {"pint", fpint},
				{"pop", fpop},
				{"swap", fswap},
				{"add", fadd},
				{"nop", fnop},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op_cod;

	op_cod = strtok(content, " \n\t");
	if (op_cod && op_cod[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (op_array[i].opcode && op_cod)
	{
		if (strcmp(op_cod, op_array[i].opcode) == 0)
		{	op_array[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op_cod && op_array[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op_cod);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
