#include <stdio.h>
/**
 * print_number - prints an integer using putchar
 *
 * @n: entero
 *
 * Return: 0
 */
void print_number(int n)
{
	int h = 1;
	int i = 0;

	if (n < 0)
	{
		putchar ('-');
		n = -n;
	}
	if (n == 0)
	{
		putchar ('0');
	}
	else
	{
		while (n / 10)
		{
			i++;
		}
		while (i > 0)
		{
			h = h * 10;
			i--;
		}
		while (h / 10)
		{
			putchar ((n / h) + '0');
			putchar (((n % h) / (h / 10)) + '0');
			n = n % h;
			h = h / 10;
		}
	}
}
