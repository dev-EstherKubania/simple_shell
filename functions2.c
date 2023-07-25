#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to destination buffer
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
/**
 * _strdup - duplicate a string
 * @str: source string to be duplicated
 *
 * Return: pointer to newly allocated string, otherwise NULL
 */
char *_strdup(const char *str)
{
	size_t length = _strlen(str);
	char *duplicate;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (duplicate == NULL)
		return (NULL);

	_strcpy(duplicate, str);
	return (duplicate);
}
/**
 * _strchr - locate character string
 * @str: string to be searched
 * @c: character to be located
 *
 * Return: pointer to first occurence of character in str
 * otherwise NULL if not found
 */
char *_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
