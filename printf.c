#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * _printf - print formatted output to stdout
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int len = 0;
const char *p = format;

if (format == NULL)
{
	return (-1);
}
va_start(args, format);

while (*p != '\0')
{
if (*p == '%')
{
switch (*(++p))
{
case 'c':
len += _putchar(va_arg(args, int));
break;
case 's':
{
const char *str = va_arg(args, const char *);
if (str == NULL)
{
	str = "(null)";
}
while (*str != '\0')
{
len += _putchar(*str++);
}
break;
}
case '%':
len += _putchar('%');
break;
case 'd':
case 'i': {
int num = va_arg(args, int);
if (num < 0)
{
len += _putchar('-');
num = -num;
}
len += print_unsign(num, 10, "0123456789");
break;
}
case 'u':
len += print_unsign(va_arg(args, unsigned int), 10, "0123456789");
break;
case 'o':
len += print_unsign(va_arg(args, unsigned int), 8, "01234567");
break;
case 'x':
len += print_unsign(va_arg(args, unsigned int), 16, "0123456789abcdef");
break;
case 'X':
len += print_unsign(va_arg(args, unsigned int), 16, "0123456789ABCDEF");
break;
case 'p': {
void *ptr = va_arg(args, void *);

len += _putchar('0');
len += _putchar('x');
len += print_unsign((unsigned long)ptr, 16, "0123456789abcdef");
break;
}
default:
{
len += _putchar('%');
len += _putchar(*p);
}

break;
}
}
else
{
len += _putchar(*p);
}
p++;
}
va_end(args);
return (len);
}
