#include"main.h"
/**
 * print_chessbord - print
 * @a: chessbord
 */
void print_chessbord(char (*a)[8])
{
	int index1, index2;

	for (index1 = 0; index1 <= 7; index1++)
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			_putchar(a[index1][index2]);
		}
		_putchar(10);
	}
}
