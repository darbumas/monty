#include "monty.h"
/**
 * _pop_opcode - ƒ() removes the top element of the stack.
 * @stackPtr: pointer to the top of the stack.
 * @l_num: line number in the file.
 * Return: Nothing
 */
void _pop_opcode(stack_t **stackPtr, unsigned int l_num)
{
	stack_t *temp = NULL;

	if (*stackPtr != NULL)
	{
		if ((*stackPtr)->next != NULL)
		{
			temp = (*stackPtr)->next;
			free(*stackPtr);
			temp->prev = NULL;
			*stackPtr = temp;
		}
		else
		{
			free(*stackPtr);
			*stackPtr = NULL;
		}
	}
	else
		_geterrmsg(4, l_num, stackPtr);
}
