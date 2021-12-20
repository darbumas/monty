#include "monty.h"
/**
 * _rotr_opcode - ƒ() rotates the stack to the bottom.
 * @stackPtr: The pointer to the top of the stack.
 * @l_num: The line number in the file.
 * Return: Nothing
 *
 * Description: The last element of the stack becomes the top element
 * of the stack.
 */
void _rotr_opcode(stack_t **stackPtr, unsigned int l_num)
{
	int element;
	stack_t *current = *stackPtr;
	(void)l_num;

	if (*stackPtr != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		element = current->n;
		while (current->prev != NULL)
		{
			current->n = current->prev->n;
			current = current->prev;
		}
		current->n = element;
	}
}
