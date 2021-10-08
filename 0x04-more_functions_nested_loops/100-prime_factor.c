#include <stdio.h>
/**
 * main - prime factors
 *
 * Return: 0
 */
int main(void)
{
	long int n;
	long int div;
	int factor;

	n = 612852475143;
	div = 2;
	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			factor = n;
			n = n / div;
			if (n == 1)
			{
				printf("%d\n", factor);
				break;
			}
		}
	}
	return (0);
}
