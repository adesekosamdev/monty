#include "monty.h"
/**
 * fpall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void fpall(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	(void)counter;

	ptr = *head;
	if (ptr == NULL)
		return;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
