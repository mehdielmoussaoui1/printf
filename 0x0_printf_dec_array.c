#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dec_array - prints a decimal number.
 * @nbr: number to print.
 * Return: number of digits printed.
 */
int print_dec_array(unsigned int nbr)
{
    int i, j = 0;
    int *array;
    unsigned int temp = nbr;

    while (nbr / 10 != 0)
    {
        nbr /= 10;
        j++;
    }
    j++;
    array = (int *)malloc(j * sizeof(int));

    for (i = 0; i < j; i++)
    {
        array[i] = temp % 10;
        temp /= 10;
    }
    for (i = j - 1; i >= 0; i--)
    {
        printf("%c", array[i] + '0');
    }

    free(array);
    return (j);
}
