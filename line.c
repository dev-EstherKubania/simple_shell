#include "main.h"

/**
 * empty_line - checks if an empty line exists
 * @buff: line
 * Return: 0 or 1
 */

int empty_line(char *buff)
{
	int i;

	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] != ' ')
			return (0);
	}
	return (1);
}

