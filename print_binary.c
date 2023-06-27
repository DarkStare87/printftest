#include <stdio.h>
#include "main.h"
/**
* print_binary - Prints the binary representation of an unsigned integer
* @n: The unsigned integer to print in binary format
* Return: The number of binary digits printed
*/
int print_binary(unsigned int n)
{
	int count = 0;

	if (n > 1)
	{
		count += print_binary(n / 2);
		count += _putchar(n % 2);
	}
	return (count);
}
