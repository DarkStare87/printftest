#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf_binary - print binary output to stdout
 * @format: format string
 * Return: binary rep of characters printed
 */
int _printf_binary(const char *format, ...)
{
va_list args;
int len = 0;
const char *p = format;

va_start(args, format);

while (*p != '\0')
{
if (*p == '%')
{
switch (*(++p))
{
case 'b':
{
unsigned int n = va_arg(args, unsigned int);
len += print_binary(n);
break;
}
}
}
else
{
_putchar(*p);
len++;
}
p++;
}

va_end(args);
return (len);
}
