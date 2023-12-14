#include "monty.h"
/**
  *fsub- sustraction
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void fsub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int set, nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	set = temp->next->n - temp->n;
	temp->next->n = set;
	*head = temp->next;
	free(temp);
}
