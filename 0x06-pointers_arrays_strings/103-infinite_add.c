#include "main.h"
/**
 * *infinite_add - adds two numbers.
 *
 * Description: adds two numbers.
 *
 * @n1: char numero 1
 * @n2: char numero 2
 * @r: pointer
 * @size_r: integer
 * Return: pointer or 0 if fail
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0;
	int y = 0;
	int i = size_r - 1;
	char llevar = 0;
	int num;

	while (n1[x] != '\0')
		x++;
	while (n2[y] != '\0')
		y++;
	r[i] = '\0';
	i--;
	while (i >= 0)
	{
		num = llevar;
		if (x >= 0)
			num += n1[x];
		if (y >= 0)
			num += n2[y];
		llevar = num / 10;
		r[i] = (num % 10) + '0';
		i--;
		x--;
		y--;
	}
	if (i < 0 && (llevar > 0 || x > 0 || y > 0))
		return (0);
	return (r);
}
