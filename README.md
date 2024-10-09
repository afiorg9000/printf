# _printf

## Description

The `_printf` function is a custom implementation of the C standard library's `printf` function. It supports a subset of `printf`'s functionality, specifically handling the following conversion specifiers:

- **'c'**: Character
- **'s'**: String
- **'d'**, **'i'**: Signed integer in decimal notation
- **'%'**: Percent sign

The function returns the length of the string printed.

## Format String

The format string is composed of ordinary characters and conversion specifiers. Ordinary characters are printed as they are, while conversion specifiers are prefixed with `%` and indicate that a specific type of argument should be formatted and printed.

### Supported Specifiers

- **'c'**: The `int` argument is converted to an `unsigned char`, and the resulting character is printed.
- **'s'**: Characters from the array are printed up to, but not including, a terminating null byte (`'\0'`).
- **'d'**, **'i'**: The `int` argument is converted to signed decimal notation and printed.
- **'%'**: A literal `%` character is printed. No argument is required.

## Example

```c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len;

    len = _printf("Percent:[%%]\n");
    return (0);
}
```

## Author

This implementation of `_printf` was created by Sofia Mendez and Solymar Sanchez.
