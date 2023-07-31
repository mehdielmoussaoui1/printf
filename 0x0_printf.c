#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_printf- function that produces output according to a format.
  *
  *@format: A character string containing zero or more directives.
  *
  *Return: The number of characters printed.
*/

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						int c = va_arg(args, int);
						_putchar((char)c);
						len++;
						break;
					}
				case 's':
					{
						char *str = va_arg(args, char*);
						if (str != NULL)
						{
							while (*str)
							{
								_putchar(*str);
								str++;
								len++;
							}
						}
						break;
					}
				case '%':
					_putchar('%');
					len++;
					break;
				default:
					_putchar('%');
					_putchar(*format);
					len += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			len++;
		}
		format++;
	}

	va_end(args);
	return len;
}
