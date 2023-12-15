#include "monty.h"
/**
 * fpop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void fpop(stack_t **head, unsigned int counter)
{
	stack_t *ptr;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	*head = ptr->next;
	free(ptr);
}
