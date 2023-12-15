#include "monty.h"

/**
 * fpstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/

void fpstr(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	(void)counter;

	ptr = *head;
	while (ptr)
	{
		if (ptr->n > 127 || ptr->n <= 0)
		{
			break;
		}
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	printf("\n");
}
