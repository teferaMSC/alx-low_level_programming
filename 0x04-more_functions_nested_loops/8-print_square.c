#include "main.h"
/**
 * print_square - function that work squwer
 * @i: input
 * return: squer
 */
void print_square(int i)
{
	int s, l;

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 1; s <= i; s++)
		{
			_putchar('#');
			for (l = 2; l <= i; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

