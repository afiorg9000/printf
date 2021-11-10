#include "main.h"

int _printf(const char *format, ...);

/**
 * _printf - function that prints string.
 * @format: points to a character string that cant be
 * modified. The argument meant to be passed to be passed.
 * '...' -unspecified umber of arguments.
 * Return: total numbers of character printed.
 */
int _printf(const char *format, ...)
{
	int n, flag = 0;
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
			if (format[n - 1] == ' ')
				flag = 1;
			if (format[n] == 's')
			{
				len += print_stringmod(va_arg(fmt, char *), 0);
			}
			else if (format[n] == 'c')
				len += print_charmod(va_arg(fmt, int), 0);
			else if (format[n] == 'd' || format[n] == 'i')
				len += print_numod(va_arg(fmt, int));
			else if (format[n] == '%')
				len += print_percent('%', 0);
			else
			{
				if (flag == 1)
					len += _putchar('%');
				_putchar(format[--n]);
				len++;
			}
		}
		else
		{
			if (format[n] != '%')
			{
				_putchar(format[n]);
				len++;
			}
		}
	}
	va_end(fmt);
	return (len);
}
