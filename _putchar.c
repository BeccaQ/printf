#include "main.h"

/* Global variable declaration */
int count = 0;

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	count++;
	return (write(1, &c, 1));
}
