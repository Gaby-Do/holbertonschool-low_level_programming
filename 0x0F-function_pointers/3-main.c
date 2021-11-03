#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations.
 * Description: performs simple operation, by calling other functions
 * @argc: int number
 * @argv: pointer
 * Return: 98, 99, 100
 */
int main(int argc, char **argv)
{
	int calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '%' && argv[2][0] != '/' && argv[2][0] != '+' &&
			argv[2][0] != '*' && argv[2][0] != '-')
	{
		printf("Error\n");
		exit(99);
	}
	calc = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", calc);
	return (0);
}
