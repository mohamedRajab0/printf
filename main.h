#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
int print_digit(long n, int base);
int print_str(char *s);
int print_format(char specifier, va_list ap);
int _printf(const char *format, ...);

#endif
