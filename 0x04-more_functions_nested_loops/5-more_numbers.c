#include "main.h"
/**
 * more_numbers -function print more numbers
 * _putchar only 3 time
 * Return: number from 0-14 10 times
 */
void more_numbers(void)
{
	int i, no;

	for (no = 0; no <= 9; no++)
	{
		for (i =0; i <=14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
}
