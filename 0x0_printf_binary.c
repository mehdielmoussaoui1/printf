#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints a binary number.
 * @val: arguments.
 * Return: number of digits printed.
 */
int print_binary(va_list val)
{
	unsigned int nbr = va_arg(val, unsigned int);
	int cont = 0;
	int digit;

	if (nbr == 0)
	{
		_putchar('0');
		return (1);
	}

	for (int i = 31; i >= 0; i--)
	{
		digit = (nbr >> i) & 1;
		if (digit || cont > 0)
		{
			_putchar(digit + '0');
			cont++;
		}
	}

	return (cont);
}
