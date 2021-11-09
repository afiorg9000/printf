#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len;
	int len2;
	char *s = NULL;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("Null type format spec example: [%s]\n", s);
	len2 = printf("Null type format spec example: [%s]\n", s);
	printf("len: %d len2: %d\n", len, len2);
	len = _printf("Spaces:%    s\n", "spaces");
	printf("\n\n\n------------------------------------------------------\n\n\n");
	len2 = printf("Spaces:%    s\n", "spaces");
	printf("len: %d len2: %d\n", len, len2);
	len = _printf("String & char: [%s], [%c]\n", "Hello", 'D');
	len2 = printf("String & char: [%s], [%c]\n", "Hello", 'D');
	printf("len: %d len2: %d\n", len, len2);


	return (0);
}
