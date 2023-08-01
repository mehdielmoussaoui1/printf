#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char_handler - Prints a char.
 * @args: The arguments list.
 * Return:(always 1).
 */
int print_char_handler(va_list args)
{
    char c = va_arg(args, int);
    _putchar(c);
    return (1);
}
