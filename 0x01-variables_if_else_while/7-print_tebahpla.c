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
	char alfa;

	alfa = 'z';
	while (alfa >= 'a')
	{
		putchar (alfa);
		alfa--;
	}
	putchar ('\n');

	return (0);
}
