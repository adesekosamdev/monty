#include "monty.h"
/**
 * fpint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void fpint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
