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

	if (format == NULL || fmt == NULL)
		return (-1);

	va_start(fmt, format);
	for (n = 0; format[n] != '\0'; n++)
	{
		if (format[n] == '%' && format[n + 1] != '\0')
		{
			++n;
			if (format[n] == ' ')
			{
				for (; format[n] == ' ' && format[n] != '\0'; n++)
					;
			}
			if (format[n] == 's')
			{
				len += print_stringmod(va_arg(fmt, char *), 0);
			}
			if (format[n] == 'c')
				len += print_charmod(va_arg(fmt, int), 0);
			if (format[n] == 'd' || format[n] == 'i')
				len += print_numod(va_arg(fmt, int));
			if (format[n] == '%')
				len += print_percent('%', 0);
		}
		else
		{
			_putchar(format[n]);
			len++;
		}
	}
	va_end(fmt);
	return (len);
}
