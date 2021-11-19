#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: integer to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = n;
	int i = 0;

	while (num > 0)
	{
		i++;
		num = num >> 1;
	}
	i = i - 1;
	if (n == 0)
		_putchar('0');
	while (i >= 0)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
