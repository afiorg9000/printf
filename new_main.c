#include <stdio.h>
#include "main.h"
#include <limits.h>
int main(void)
{
	int len1, len2;
	char *s = NULL;

	len1 = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("_printf return:%i printf return:%i\n", len1, len2);

	len1 = _printf("Should print a single percent sign: %%\n");
	len2 = printf("Should print a single percent sign: %%\n");
	printf("_printf return:%i printf return:%i\n", len1, len2);

	len1 = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("_printf return:%i printf return:%i\n", len1, len2);

	len1 = _printf("num: %i num: %d\n", 12, 34);
	len2 = printf("num: %i num: %d\n", 12, 34);
	printf("_printf return:%i printf return:%i\n", len1, len2);

	len1 = _printf("num: %i num: %d\n", -1234444, 5678888);
	len2 = printf("num: %i num: %d\n", -1234444, 5678888);
	printf("_printf return:%i printf return:%i\n", len1, len2);

	len1 = _printf("num: %i num: %d\n", INT_MAX, INT_MIN);
	len2 = printf("num: %i num: %d\n", INT_MAX, INT_MIN);
	printf("_printf return:%i printf return:%i\n", len1, len2);

	len1 = _printf("%   w\n");
	len2 = printf("%   w\n");
	printf("_printf return:%i printf return:%i\n", len1, len2);

	len1 = _printf("%   s\n", "funciona pls");
	len2 = printf("%    s\n", "funciona pls");
	printf("_printf return:%i printf return:%i\n", len1, len2);

	len1 = _printf("%s\n", s);
	len2 = printf("%s\n", s);
	printf("_printf return:%i printf return:%i\n", len1, len2);

	len1 = _printf("%!\n");
	len2 = printf("%!\n");
	printf("_printf return: %i printf return: %i\n", len1, len2);

	len1 = _printf("%\n");
	len2 = printf("%\n");
	printf("_printf return: %i printf return: %i\n", len1, len2);
	return (0);
}
