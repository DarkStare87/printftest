#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2, len3, len4, len5;
    unsigned int ui;
    void *addr;
    int* ptr2 = malloc(sizeof(int));
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";

    printf("-----------------------------------------------------------------------\n");
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    printf("-----------------------------------------------------------------------\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    len = _printf("%d\n", 0);
    len2 = printf("%d\n", 0);
    printf("-----------------------------------------------------------------------\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    len = _printf("%x\n", 0);
    len2 = printf("%x\n", 0);
    printf("-----------------------------------------------------------------------\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    len = _printf("%o\n", 0);
    len2 = printf("%o\n", 0);
    printf("-----------------------------------------------------------------------\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    printf("-----------------------------------------------------------------------\n");
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    printf("-----------------------------------------------------------------------\n");
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    printf("-----------------------------------------------------------------------\n");
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    printf("-----------------------------------------------------------------------\n");
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("-----------------------------------------------------------------------\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    printf("-----------------------------------------------------------------------\n");
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    len3 =  _printf("Address:[%p]\n", addr);
    len4 = printf("Address:[%p]\n", addr);
    printf("-----------------------------------------------------------------------\n");
    _printf("Address:[%p]\n", NULL);
    _printf("Address:[%p]\n", NULL);
    printf("-----------------------------------------------------------------------\n");
    printf("Len:[%d]\n", len3);
    printf("Len:[%d]\n", len4);

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("-----------------------------------------------------------------------\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    printf("-----------------------------------------------------------------------\n");
    _printf("Unknown:[%y]\n");
    printf("Unknown:[%y]\n");
    printf("-----------------------------------------------------------------------\n");
    _printf("String with spaces: %r\n", "Hello World");
    _printf("String with special characters: %r\n", "Hello, World!");
    printf("-----------------------------------------------------------------------\n");
    _printf("%     s\n", "\n MMm\n");
    printf("%     s\n", "\n MMm\n");
    printf("-----------------------------------------------------------------------\n");
    _printf("Non-null pointer: %p\n", ptr2);
    printf("Non-null pointer: %p\n", ptr2);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("%R\n", s);

    _printf("%d", len);
    printf("-----------------------------------------------------------------------\n");
    printf("Now is control\n");
    len2 = printf("%s\n", s);
    _printf("%S\n", "Hello\vWorld\r\n");
	_printf("%S\n", "\a\b\f\n\r\t\v");
    printf("-----------------------------------------------------------------------\n");
    _printf("%b\n", 98);
    len5 = _printf("%S\n", "Best\nSchool");
    printf("Len:[%d]\n", len5);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("%d\n", INT_MIN);
    len2 = printf("%d\n", INT_MIN);
    _printf("%d\n", len);
    printf("%d\n", len);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

    _printf("%d\n", len);
    printf("%d\n", len);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("%i", INT_MIN);
    len2 = printf("%i", INT_MIN);

    _printf("%i\n", len);
    printf("%i\n", len2);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    len2 = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    
    _printf("%d\n", len);
    printf("%d\n", len);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("%");
    _putchar('\n');
    len2 = printf("%");
    _putchar('\n');

    _printf("%d\n", len);
    _printf("%d\n", len2);
    printf("-----------------------------------------------------------------------\n");
    _printf("[%d] <-->\n", len);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("%S\n", "\n");
    _printf("[%d] <-->\n", len);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("%S\n", "\x01\x02\x03\x04\x05\x06\x07");
    _printf("[%d] <-->\n", len);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
    printf("-----------------------------------------------------------------------\n");



    return (0);
}
