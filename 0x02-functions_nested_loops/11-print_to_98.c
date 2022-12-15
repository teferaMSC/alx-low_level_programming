#include "main.h"
/**
 * print_to_98 - natural numbe from starting zereo
 *@n:number check
 *Return: always 0
 */
void print_to_98(int)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("% d", n);
				printf("\n");
				break;
			}
			else
				printf("%d, ", n);
		}
	}
}
else
{
	for (; n >= 98; n--)
	{
		if (n == 98)
		{
			printf("%d", n);
			printf("\n");
break;
		}
		else
		{
			printf("%d, ", n);
		}
	}
}
}

