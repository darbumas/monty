#include "monty.h"
/**
 * reclaim_mem - ƒ() deallocates memory.
 * @stackPtr: pointer to the top of the stack
 * @f: flag, if set to 1, flush buffer and close file descriptor.
 * Return: Nothing.
 */
void reclaim_mem(stack_t **stackPtr, int f)
{
	stack_t *temp = *stackPtr;

	while (*stackPtr != NULL)
	{
		temp = temp->next;
		free(*stackPtr);
		*stackPtr = temp;
	}
	if (f == 1)
	{
		free(c->buf);
		fclose(c->fd);
		free(c);
	}
}
