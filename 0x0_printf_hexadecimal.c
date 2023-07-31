#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * printf_hexadecimal - prints a hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_hexadecimal(va_list val)
{
    int j = 0;
    unsigned int nbr = va_arg(val, unsigned int);
    unsigned int temp = nbr;
    unsigned int i = 0xF0000000;

    while (i > 0 && (temp & i) == 0)
    {
        i >>= 4;
    }

    if (i == 0)
    {
        _putchar('0');
        return (1);
    }

    while (i > 0)
    {
        unsigned int digit = (temp & i) >> (4 * (7 - j));
        if (digit > 9)
            _putchar('A' + (digit - 10));
        else
            _putchar('0' + digit);
        i >>= 4;
        j++;
    }

    return (j);
}
