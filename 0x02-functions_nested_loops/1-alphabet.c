#include "main.h"
/**
 *print_alphabet - to print
 *
 *description: function print_alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
