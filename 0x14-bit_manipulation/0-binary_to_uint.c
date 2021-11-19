#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 an 1 chars
 * Return: the converted nmbr, or 0 if string NULL or has other than 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, pot = 1, i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;/*string length*/
	while (i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);/*if content is not 0 nor 1*/
		if (b[i] == '1')
			n = n + pot;
		pot = pot * 2;/*2 for binary*/
	}
	return (n);
}
