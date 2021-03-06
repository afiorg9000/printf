#include "main.h"

/**
 * print_stringmod - prints string.
 * @string: string to be printed.
 * @length: length of string.
 * Return: length of string
 */

int print_stringmod(char *string, int length)
{
	int x;

	length = 0;

	if (string == NULL)
	{
		string = "(null)";
	}

	for (x = 0; string[x] != '\0'; x++)
	{
		_putchar(string[x]);
		length++;
	}
	return (length);
}

/**
 * print_charmod - prints character
 * @character: character to be printed
 * @length: length of char
 * Return: length of char
 */

int print_charmod(int character, int length)
{
	_putchar(character);
	length++;

	return (length);
}

/**
 * print_numod - prints number.
 * @number: number to be printed.
 * Return: number.
 */

int print_numod(int number)
{
	int length = 1;
	unsigned int num;

	if (number < 0)
	{
		num = number;
		_putchar('-');
		length++;
		num = num * (-1);
	}
	else
		num = number;

	if (num > 9)
		length += print_numod(num / 10);

	_putchar((num % 10) + '0');
	return (length);
}

/**
 * print_percent - prints percentage.
 * @percent: percent to be printed.
 * @length: length of the percentage.
 * Return: percent
 */

int print_percent(int percent, int length)
{
	_putchar(percent);
	length++;
	return (length);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
