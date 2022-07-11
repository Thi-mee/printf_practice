#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - writes the number i to stdout
 * @i: The number to print
 *
 * Return: 1.
 */
int print_int(va_list i)
{
	unsigned int num;

	num = va_arg(i, int);
	_putchar(num);
	return (1);
}
