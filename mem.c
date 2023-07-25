#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @n: array
 * @size: size
 * Return: pointer or NULL
 */

void *_calloc(unsigned int n, unsigned int size)
{
	unsigned int index = 0;
	char *ptr = NULL;

	if (n == 0 || size == 0)
		return (NULL);

	ptr = malloc(n * size);

	if (ptr == NULL)
		return (NULL);

	for (; index < (n * size); index++)
		ptr[index] = 0;

	return (ptr);
}

