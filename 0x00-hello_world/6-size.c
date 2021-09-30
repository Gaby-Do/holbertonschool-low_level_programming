#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Description: prints the size of various types
 *
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu bytes\n", sizeof(float));

	return (0);
}
