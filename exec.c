#include "main.h"
/**
 * execute - Execute a command
 *
 * @args: Array of strings containing command and arguments
 *
 * Return: Status code of the command execution
 */
int execute(char **args)
{
	int status;
	char *command_path = search_path(args[0]);

	if (command_path != NULL)
	{
		pid_t child_pid = fork();

		if (child_pid == 0)
		{
			if (execve(command_path, args, environ) == -1)
			{
				perror("execve");
				exit(127);
			}
		}
		else if (child_pid < 0)
		{
			perror("fork");
			exit(126);
		}
		else
		{
		wait(&status);
		}
		{
		free(command_path);
		}
		}
	return (status);
}
