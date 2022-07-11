#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1.
 */
int print_string(va_list s)
{
	char *string;
    int index = 0;

	string = va_arg(s, char*);
    while (*string != '\0')
    {
        _putchar(*string++);
        index++;
    }
	return (index);
}
