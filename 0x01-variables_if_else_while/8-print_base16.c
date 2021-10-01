#include <stdio.h>

/**
*main - this is main
*
*Description: this is main
*
*Return: 0
 */

int main(void)
{
	int a;

	int b;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	b = 'a';
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
