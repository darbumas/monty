#include "monty.h"
/**
 * _pall_opcode - ƒ() prints all the values on the stack,
 * starting from the top.
 * @stackPtr: pointer to the top of the stack.
 * @line_num: the line number in the file.
 * Return: void.
 */
void _pall_opcode(stack_t **stackPtr, unsigned int line_num)
{
	stack_t *temp = *stackPtr;

	line_num += 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
