#include "monty.h"
/**
 * _pchar_opcode - ƒ() prints the char at the top of the stack.
 * @stackPtr: pointer to the top of the stack.
 * @l_num: line number in the file.
 * Return: Nothing.
 */
void _pchar_opcode(stack_t **stackPtr, unsigned int l_num)
{
	if (*stackPtr == NULL)
		_geterrmsg(13, l_num, stackPtr);
	else if ((*stackPtr)->n >= 0 && (*stackPtr)->n <= 255)
		printf("%c\n", (*stackPtr)->n);
	else
		_geterrmsg(12, l_num, stackPtr);
}
