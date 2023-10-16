#include "main.h"

/**
 * print_str - handle the string case
 * @s: pointer to string
 *
 * Return: number of char
*/

int print_str(char *s)
{
	int count;

	count = 0;
	while (*s)
		count += write(1, s++, 1);
	return (count);
}
