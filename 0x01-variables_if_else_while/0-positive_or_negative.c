#include <stdlib.h>
#include <time.h>
/**
  *main - this is main
  *
  *Description: this is main
  *
  *Return: 0
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d", n, "%c", "is positive");
			if (n < 0)
				printf("%d", n, "%c", "is negative");
			else
	}			printf("%d>", n, "%c", "is zero");
	return (0);
}
