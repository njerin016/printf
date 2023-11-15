#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format.
 * @format: function input
 *
 * Return: formatted output
 */

int _printf(const char *format, ...)
{
	int c = 0;
	va_list lists;

	va_start(lists, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			c = va_arg(lists, int);
			format++;
		}
		else
		{
			_putchar(*format);
			c++;
			format++;
		}
	}
	va_end(lists);

	return (c);
}
