#include "main.h"
#include <stdarg.h>

/**
 * print_format - handle the formater
 * @specifier: the specifier name
 * @ap: argument pointer
 *
 * Return: count of char
*/

int print_format(char specifier, va_list ap)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count = _putchar(va_arg(ap, int));
	else if (specifier == 's')
		count = print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count = print_digit((long)va_arg(ap, int), 10);
	else if (specifier == 'x')
		count = print_digit((long)va_arg(ap, unsigned int), 16);
	else
		count += write(1, &specifier, 1);
	return (count);
}
