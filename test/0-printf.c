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
	va_list next;

	count = 0;
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(next, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if ((format[i + 1] == 'd' || format[i + 1] == 'i'))
			{
				print_number(va_arg(next, int));
				i++;
				continue;
			} else if (format[i + 1] == 'c')
			{
				_putchar(va_arg(next, int));
				i++;
				continue;
			} else if (format[i + 1] == 's')
			{
				_puts(va_arg(next, char *));
				i++;
				continue;
			} else if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
				continue;
			}
		}
		_putchar(format[i]);
	}
	va_end(next);
	return (count);
}
