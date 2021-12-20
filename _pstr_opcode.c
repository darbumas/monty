#include "monty.h"
/**
 * _pstr_opcode - ƒ() prints string starting at the top of the stack.
 * @stackPtr: pointer to the top of the stack.
 * @l_num: line number in the file.
 * Return: Nothing.
 */
void _pstr_opcode(stack_t **stackPtr, unsigned int l_num)
{
	stack_t *temp = *stackPtr;
	(void)l_num;

	if (stackPtr == NULL || *stackPtr == NULL)
	{
		printf("\n");
		return;
	}
	while (temp != NULL)
	{
		if (temp->n > 0 && temp->n <= 127)
		{
			printf("%c", temp->n);
			temp = temp->next;
		}
		else
			break;
	}
	printf("\n");
}
