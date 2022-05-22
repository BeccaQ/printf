#include "main.h"

/**
 * _printf - Prints output acording to an input format.
 * @format: Pointer to a formated string
 *
 * Return: number of characters printed to the screen
 */
int _printf(const char *format, ...)
{
	int i;
	char ch, ch2;
	va_list next;

	va_start(next, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		ch = format[i];
		ch2 = format[i + 1];

		if (ch == '%')
		{
			if ((ch2 == 'd' || ch2 == 'i'))
			{
				print_number(va_arg(next, int));
				i++;
				continue;
			}

			if (ch2 == 'c')
			{
				_putchar(va_arg(next, int));
				i++;
				continue;
			}

			if (ch2 == 's')
			{
				_puts(va_arg(next, char *));
				i++;
				continue;
			}

			if (ch2 == '%')
			{
				_putchar('%');
				i++;
				continue;
			}
		}

		_putchar(ch);
	}

	va_end(next);

	return (count);
}
