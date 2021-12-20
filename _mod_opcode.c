#include "monty.h"
/**
 * _mod_opcode - ƒ() computes the remainder of the 2nd top element by the top
 * element of the stack.
 * @stackPtr: pointer to the top of the stack.
 * @l_num: line number in the file.
 * Return: Nothing.
 */
void _mod_opcode(stack_t **stackPtr, unsigned int l_num)
{
	stack_t *temp = NULL;

	if (*stackPtr == NULL)
		_geterrmsg(11, l_num, stackPtr);
	else if ((*stackPtr)->next != NULL)
	{
		if ((*stackPtr)->n == 0)
			_geterrmsg(9, l_num, stackPtr);
		temp = (*stackPtr)->next;
		temp->n = temp->n % (*stackPtr)->n;
		free(*stackPtr);
		temp->prev = NULL;
		*stackPtr = temp;
	}
	else
		_geterrmsg(11, l_num, stackPtr);
}
