#include "monty.h"
/**
 * _pint_opcode - ƒ() to print value at the top of the stack.
 * @stackPtr: pointer to the top of the stack.
 * @l_num: line number in the file.
 * Return: Nothing.
 */
void _pint_opcode(stack_t **stackPtr, unsigned int l_num)
{
	stack_t *temp = *stackPtr;

	if (!temp)
	{
		_geterrmsg(3, l_num, stackPtr);
	}
	printf("%d\n", temp->n);
}
