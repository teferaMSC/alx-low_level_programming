#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry time
 * Return: Always 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("last digit of %d is %d and greater than 5\n", n, last);
	}
	else if (last == 0)

	{
		printf("last digit of %d is %d  and is 0\n", n,  last);
	}

	else(last < 6);

	{
	printf("last digit of %d is %d and less than 6 and not 0\n", n, last);
	}
	return (0);
}
