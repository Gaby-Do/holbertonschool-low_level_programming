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

	char beta;

	alfa = 'a';
	while (alfa <= 'z')
	{
		putchar (alfa);
		alfa++;
	}
	beta = 'A';
	while (beta <= 'Z')
	{
		putchar (beta);
		beta++;
	}
	putchar ('\n');

	return (0);
}
