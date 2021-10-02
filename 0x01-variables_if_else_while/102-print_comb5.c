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

	for (a = 0; a < 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(32);
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 89 && b == 99)
				continue;
			putchar(44);
			putchar(32);
			}
		}
	putchar('\n');
	return (0);
}
