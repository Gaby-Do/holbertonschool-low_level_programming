#include "main.h"
#include <stdio.h>

/**
  *print_to_98- prints all natural numbers from n to 98
  *
  *Description: prints all natural numbers from n to 98
  *
  *@n: integer
  *Return: 0
  */

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ",n);
		}
			printf("%d\n",n);
	}
	else
	{
		for (; n < 98; n++)
		{
			printf("%d, ",n);
		}
			printf("%d\n",n);
	}
}
