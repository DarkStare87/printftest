#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_unsign - print an unsigned integer in a specified base
 * @n: the number to print
 * @base: the base to use (e.g. 10 for decimal, 16 for hexadecimal, etc.)
 * @digits: the string of digits to use for the base (e.g. "0123456789abcdef")
 *
 * Return: the number of characters printed
 */
int print_unsign(unsigned int n, int base, const char *digits)
{
int len = 0;

if (n / base > 0)
{
len += print_unsign(n / base, base, digits);
}
len += _putchar(digits[n % base]);
return (len);
}
