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

	alfa = 'a';
	while (alfa <= 'z')
	{
		putchar (alfa);
		alfa++;
	}
	putchar ('\n');

	return (0);
}
