#include "main.h"
/**
 * main - to print alphabate
 * Description: print alphabet for a to z
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
