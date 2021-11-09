#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(char c);

int print_charmod(int character, int length);

int print_stringmod(char *string, int length);

int print_numod(int number);

int print_percent(int percent, int length);

#endif /* MAIN_H */
