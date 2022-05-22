#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: Pointer to the string value to print.
 *
 * Return: None.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	/* printf("\n"); */
}
