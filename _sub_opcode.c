#include "monty.h"
/**
 * _sub_opcode - ƒ() substracts the top two elements of the stack.
 * @stackPtr: pointer to the top of the stack.
 * @l_num: line number in the file.
 * Return: Nothing.
 */
void _sub_opcode(stack_t **stackPtr, unsigned int l_num)
{
	stack_t *temp = NULL;

	if (*stackPtr == NULL)
		_geterrmsg(7, l_num, stackPtr);
	else if ((*stackPtr)->next != NULL)
	{
		temp = (*stackPtr)->next;
		temp->n = temp->n - (*stackPtr)->n;
		free(*stackPtr);
		temp->prev = NULL;
		*stackPtr = temp;
	}
	else
		_geterrmsg(7, l_num, stackPtr);
}
