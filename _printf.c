#include "main.h"

/**
 * _printf - function that prints string.
 * @format: points to a character string that cant be
 * modified. The argument meant to be passed to be passed.
 * '...' -unspecified umber of arguments.
 * Return: total numbers of character printed.
 */

int _printf(const char *format, ...)
{
	int n;
	va_list fmt;
	int len = 0;

	if (format == NULL)
		return (0);

	va_start(fmt, format);
	for (n = 0; format[n] != '\0'; n++)
	{
		if (format[n] == '%')
		{
			if (format[n + 1] == 's')
				len += print_stringmod(va_arg(fmt, char *), 0);
			else if (format[n + 1] == 'c')
				len += print_charmod(va_arg(fmt, int), 0);
			else if (format[n + 1] == 'd' || format[n + 1] == 'i')
				len += print_numod(va_arg(fmt, int));
			else if (format[n + 1] == '%')
				len += print_percent('%', 0);
			n++;
		}
		else
		{
			putchar(format[n]);
			len++;
		}
	}
	return (len);
}
