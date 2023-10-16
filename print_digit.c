#include "main.h"
#include <stdio.h>

/**
 * print_digit - handle the digit to print
 * @n: number of digit
 * @base: the base to print
 *
 * Return: number of printed char
*/

int print_digit(long n, int base)
{
	int count;
	char *symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base) + 1);
	}
	else if (n < base)
		return (_putchar(symbols[n]));

	count = print_digit(n / base, base);
	return (count + print_digit(n % base, base));
}
