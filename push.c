#include "monty.h"

/**
 * push - function that adds an node to the end of
 * the stack_t linked list.
 * @head: pointer to the linked list.
 * @ln: instruction line number.
 *
*/
void push(stack_t **head, unsigned int ln)
{
	stack_t *new_node = NULL;

	(void)ln;

	if (*head == NULL)
	{
		new_node = malloc(sizeof(stack_t));

		if (new_node == NULL)
			return;

		new_node->n = gob.n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		new_node = malloc(sizeof(stack_t));

		if (new_node == NULL)
			return;

		new_node->n = gob.n;
		new_node->next = *head;
		new_node->prev = NULL;
		(*head)->prev = new_node;
		*head = new_node;
	}
}