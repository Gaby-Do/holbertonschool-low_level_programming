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
	char a;

	a = 48;
	while (a <= 57)
	{
		putchar(a);
		if (a < 57)
		putchar(44);
		putchar(32);
		a++;
	}
	putchar('\n');
	return (0);
}
