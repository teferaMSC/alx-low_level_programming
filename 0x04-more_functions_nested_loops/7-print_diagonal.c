#include "main.h"
/**
 * print_diagonal - function print diagonal
 * @i: input
 * Return: same thing diagonal
 */
void print_diagonal(int i)
{
	int d, l;

	if (i <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (d = 1; d <= n; d++)
		{
			for (l = 1; l < d; l++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

