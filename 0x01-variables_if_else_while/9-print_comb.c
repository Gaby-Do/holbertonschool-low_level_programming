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

	a = 48;
	while (a <= 57)
	{
		putchar(a);
		a++;
		if (a < 58)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
