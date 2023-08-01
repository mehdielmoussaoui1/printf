#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct- match the conversion specifiers for printf
 * @id: pointer of the specifier
 * @function: type pointer to function for the conversion specifier
 *
 */
typedef struct {
    char *id;
    void (*function)(va_list args);
} FormatHandler;

int printf(const char *format, ...);
int _putchar(char c);

int print_int(va_list args);
int print_37X(void);
int print_new_string(va_list val);

int print_rot13_string(va_list args);
int _print_char(va_list val);
int print_reverse(va_list args);
int print_hexa(va_list val);

int print_unsigned(va_list args);
int print_pointer(va_list val);

int print_digit(unsigned long int num);
int print_numbers(unsigned int num);

int print_array(va_list val);
int print_loop(va_list val);

int print_unsigned(va_list args);
int print_argementX(va_list val);

int printf_dec(va_list args);

int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlength(const char *s);
int reverse_string(char *s);
int _string_length(const char *s);

int print_string(va_list val);

