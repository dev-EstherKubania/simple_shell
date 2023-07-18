#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char message[] = "Hello, world!\n";

	write(1, message, sizeof(message) - 1);
	return (0);
}

