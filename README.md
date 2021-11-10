DESCRIPTION

The _printf() writes a program that mimics the abilities of a printf function
thats capable of handling the 'c', 's', 'd', 'i', '%'.

Returns the length of the string printed.

FORMAT STRING

character string composed of directives:
ordinary characters && conversion specifiers.

The function can convert certain specifiers such as:

'c'

The int argument is converted to an unsigned char, and the resulting character is written.

's'

Characters from the array are written up to (but no including)
a terminating null byte ('\0').

'd', 'i'

The int argument is converted to signed decimal notation.

'%'

A '%' is written. No argument is converted. The complete conversion specification is '%%'.

EXAMPLE

#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main (void)

{
	int len;

	len = _printf("Percent:[%%]\n");
	return(0);
}

AUTHOR
Sofia Mendez && Solymar Sanchez
