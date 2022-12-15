#include "main.h"
/**
 * print_triangle - function that print triangle
 * @s
 * Return: the triangle size
 */
void print_triangle(int s)
{
	int a, r, t;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r <= (s - 1); r++)
		{
			for (a = 0; a < (s - 1) - r; a++)
			{
				_putchar(' ');
			}
			for (t = 0; t <= r; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
