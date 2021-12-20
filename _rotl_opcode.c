#include "monty.h"
/**
 * _rotl_opcode - ƒ() rotates the stack to the top.
 * @stackPtr: The pointer to the top of the stack.
 * @l_num: line number in the file.
 * Return: Nothing

 * Description: The top element of the stack becomes the last one,
 * and the second top element of the stack becomes the first one.
 */
void _rotl_opcode(stack_t **stackPtr, unsigned int l_num)
{
	int element;
	stack_t *current = *stackPtr;
	(void)l_num;

	if (*stackPtr != NULL)
	{
		element = current->n;
		while (current->next != NULL)
		{
			current->n = current->next->n;
			current = current->next;
		}
		current->n = element;
	}
}
