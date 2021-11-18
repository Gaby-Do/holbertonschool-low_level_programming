#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 an 1 chars
 * Return: the converted nmbr, or 0 if string NULL or has other than 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int pot = 1;
	unsigned int n = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != 0 && b[i] != 1)
			return (0);
	for (i -= 1; i >= 0; i--)
	{
		n = n + b[i] * pot;
		pot = pot * 2;/*2 for binary*/
	}
	return (n);
}
