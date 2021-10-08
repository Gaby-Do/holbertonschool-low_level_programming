#include <stdio.h>

/**
 *main - “Fizz-Buzz test”
 *
 *Description: “Fizz-Buzz test”
 *Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 99; a++)
	{
		if ((a % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		if ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		if ((a % 5) == 0)
		{
			printf("Buzz ");
		}
		if (((a % 3) != 0) && ((a % 5) != 0))
		{
			printf("%d ", a);
		}
	}
	printf("Buzz\n");
	return (0);
}
