#include "monty.h"
/**
 * _getOpFunc - ƒ() returns the appropriate function for specific opcodes.
 * @stackPtr: pointer to the top of the stack.
 * @oc: pointer to the opcode on the line.
 * @l_num: line number in the file.
 * Return: pointer to the stack.
 */
stack_t *_getOpFunc(stack_t **stackPtr, char *oc, unsigned int l_num)
{
	int i = 0;

	instruction_t fnc_arr[] = {
		{"push", _push_opcode},
		{"pall", _pall_opcode},
		{"pint", _pint_opcode},
		{"swap", _swap_opcode},
		{"add", _add_opcode},
		{"nop", _nop_opcode},
		{"sub", _sub_opcode},
		{"div", _div_opcode},
		{"mul", _mul_opcode},
		{NULL, NULL}
	};

	while (fnc_arr[i].opcode != NULL)
	{
		if (strcmp(fnc_arr[i].opcode, oc) == 0)
		{
			fnc_arr[i].f(&(*stackPtr), l_num);
			break;
		}
		i++;
	}
	if (i == 9)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", l_num, oc);
		if (stackPtr != NULL)
			reclaim_mem(stackPtr, 0);
		free(c->buf);
		fclose(c->fd);
		free(c);
		exit(EXIT_FAILURE);
	}
	return (*stackPtr);
}
