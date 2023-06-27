#include <stdio.h>
#include "main.h"
/**
 *print_string - function prints a string
 *@str: the string to print
 *Return: void
 */
void print_string(const char *str)
{
while (*str)
{
if (*str > 31 && *str < 127)
{
putchar(*str);
}
else
{
putchar('\\');
putchar('x');
putchar((*str >> 4) + '0');
putchar((*str & 0x0F) + '0');
}
str++;
}
}
