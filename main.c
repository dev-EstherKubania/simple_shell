#include "main.h"
/**
 * main - open shell, project base
 * Return: int
 */
int main(void)
{
	char *buff = NULL, **args;
	size_t read_size = 0;
	ssize_t buff_size = 0;
	int exit_status = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "($) ", 4);
		buff_size = getline(&buff, &read_size, stdin);
	if (buff_size == -1 || feof(stdin))
	{
<<<<<<< HEAD
=======
		/*_putchar('\n');*/
>>>>>>> 02f88d47de02234ee8c46ae07b184c4bd451ccb1
	break;
	}
	if (buff_size == 1 && buff[0] == '\n')
	continue;
	buff[buff_size - 1] = '\0';
	if (_strcmp("exit", buff) == 0)
	break;
	if (_strcmp("env", buff) == 0)
	{
	_env();
	continue;
	}
	if (empty_line(buff) == 1)
	{
	exit_status = 0;
	continue;
	}
	args = _split(buff, " ");
	args[0] = search_path(args[0]);
	if (args[0] != NULL)
	exit_status = execute(args);
	else
	perror("Error");
	free(args);
	}
	free(buff);
	return (exit_status);
}
