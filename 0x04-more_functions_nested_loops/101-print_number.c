#include "main.h"

/**
 * print_number - prints an integer using _putchar
 *
 * @n: the integer to print
 */
void print_number(int n)
{
    int digit, negative = 0;

    if (n < 0)
    {
        negative = 1;
        n = -n;
    }

    if (n / 10 != 0)
        print_number(n / 10);

    digit = n % 10;
    _putchar(digit + '0');

    if (negative)
        _putchar('-');
}
