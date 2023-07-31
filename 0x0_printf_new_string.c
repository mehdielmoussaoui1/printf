#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * printf_new_string - print exclusive string.
 * @val: argument.
 * Return: the length of the string.
 */
int printf_new_string(va_list val)
{
    char *s;
    int len = 0;

    s = va_arg(val, char *);
    if (s == NULL)
        s = "(null)";

    for (; *s != '\0'; s++)
    {
        if (*s < 32 || *s >= 127)
        {
            len += _putchar('\\');
            len += _putchar('x');
            len += printf_HEX_aux(*s);
        }
        else
        {
            len += _putchar(*s);
        }
    }
    return (len);
}

/**
 * printf_decimal - helper function to print hexadecimal value.
 * @ch: character to be printed as hexadecimal.
 * Return: number of printed characters.
 */
int printf_decimal(char ch)
{
    int len = 0;
    int cast = ch;

    if (cast < 16)
    {
        len += _putchar('0');
    }

    if (cast != 0)
    {
        len += printf_decimal(cast / 16);
        len += _putchar(print_digits(cast % 16));
    }
    else
    {
        len += _putchar('0');
    }

    return (len);
}

/**
 * print_digits - helper function to convert integer to hexadecimal character.
 * @digit: integer value (0-15).
 * Return: corresponding hexadecimal character.
 */
char print_digits(int digit)
{
    return (digit < 10) ? (digit + '0') : (digit - 10 + 'A');
}

/**
 * _putchar - placeholder function for printing a character (not defined here).
 * @ch: character to be printed.
 * Return: 1 (success).
 */
int _putchar(char ch)
{
    return putchar(ch);
}
