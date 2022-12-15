#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - print 4-print_alphabt.c
 *
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar (la);
	}
	putchar ('\n');
	return (0);
}
