#include "main.h"
/**
 * print_numbers - print number from 0 to 9
 *
 * Return: number 0 upto 9 with new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchsr('\n');
}
