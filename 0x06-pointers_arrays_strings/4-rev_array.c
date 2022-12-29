#include "main.h"
/**
 * print_rev - for reverse
 * @a: arry integer reverse
 */
void print_rev(char *a)
{
	int c = 0;

	while (a[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(a[c]);
	}
	_putchar('\n');
}
