#include "monty.h"

stack_t **global_head;
/**
 * main - root of project
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	stack_t *head;

	/* if number of arguments is not 2 */
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	head = NULL;
	global_head = &head;

	read_file(argv[1], &head);
	atexit(free_global);
	exit(EXIT_SUCCESS);
}
