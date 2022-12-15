#include<stdio.h>
#include<stdlib.h>
/**
 * main - main block
 * descripution: write a program that print all posible
 * number must be separeted by ','
 * two digit must be different
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;

		while (c < 10)
		{
			if (d != c && d < c)
			{			{
				putchar ('0' + d);
				putchar (' ');
				if (c + d != 10)
				{
			}
		}
		c++;
	}
	d++;
}
putchar ('\n');
return (0);
}
}
