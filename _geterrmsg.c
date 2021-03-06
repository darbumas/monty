#include "monty.h"
/**
 * _geterrmsg - ƒ() prints appropriate error message for opcodes.
 * @f: flag corresponding to the right error message.
 * @line_num: number of the line in file with error.
 * @stackPtr: pointer to the top of the stack.
 * Return: Nothing.
 */
void _geterrmsg(int f, unsigned int line_num, stack_t **stackPtr)
{
	if (f == 0)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else if (f == 1)
		fprintf(stderr, "Error: malloc failed\n");
	else if (f == 2)
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
	else if (f == 3)
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
	else if (f == 4)
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
	else if (f == 5)
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
	else if (f == 6)
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
	else if (f == 7)
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
	else if (f == 8)
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
	else if (f == 9)
		fprintf(stderr, "L%d: division by zero\n", line_num);
	else if (f == 10)
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
	else if (f == 11)
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_num);
	else if (f == 12)
		fprintf(stderr, "L%d: can't pchar, value out of range\n",
				line_num);
	else if (f == 13)
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
	reclaim_mem(stackPtr, 1);
	exit(EXIT_FAILURE);
}
