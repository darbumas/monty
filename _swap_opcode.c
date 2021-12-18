#include "monty.h"
/**
 * _swap_opcode - ƒ() swaps the top two elements of the stack.
 * @stackPtr: pointer to the top of the stack.
 * @l_num: line number in the file.
 * Return: Nothing.
 */
void _swap_opcode(stack_t **stackPtr, unsigned int l_num)
{
	int num;

	if (*stackPtr == NULL)
		_geterrmsg(5, l_num, stackPtr);
	else if ((*stackPtr)->next != NULL)
	{
		num = (*stackPtr)->n;
		(*stackPtr)->n = (*stackPtr)->next->n;
		(*stackPtr)->next->n = num;
	}
	else
		_geterrmsg(5, l_num, stackPtr);
}
