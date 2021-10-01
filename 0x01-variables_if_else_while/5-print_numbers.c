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

	a = 0;
	while (a <= 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
