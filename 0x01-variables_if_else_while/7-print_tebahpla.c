#include<stdio.h>
#include<stdlib.h>
/**
 * main - main block
 * description :write a program that print a number
 * starting - from
 *Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')

	{
		putchar (c);
		c--;
	}
	putchar ('\n');
	return (0);
}
