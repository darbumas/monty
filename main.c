#include "monty.h"
/**
 * main - program entry.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: void.
 */
int main(int argc, char **argv)
{
	unsigned int l_num = 1;
	size_t n = 0;
	ssize_t count;
	FILE *stream;
	char *linePtr = NULL , *string = NULL, *filename, *oc;
	stack_t *stackPtr = NULL;

	if (argc != 2)
		_geterrmsg(0, l_num, &stackPtr);
	stream = fopen(argv[1], "r");
	filename = argv[1];
	if (stream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	c = malloc(sizeof(glob_var));
	c->fd = stream;
	if (c == NULL)
		printf("Can't malloc glob_var\n");
	while ((count = getline(&linePtr, &n, stream)) != -1)
	{
		string = linePtr;
		oc = strtok(string, "\n ");
		c->oc_arg = strtok(NULL, "\n ");
		c->buf = linePtr;
		if (oc != NULL)
			stackPtr = _getOpFunc(&stackPtr, oc, l_num);
		l_num++;
	}
	fclose(stream);
	if (c->buf != NULL)
		free(c->buf);
	free(c);
	if (stackPtr != NULL)
		reclaim_mem(&stackPtr, 0);
	exit(EXIT_SUCCESS);
}
