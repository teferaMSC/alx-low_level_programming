#include<stdio.h>
#include<stdlib.h>
/**
 * main - main block
 * description : prints hexa =decimal
 * starting from 0 to 9
 * Return: always 0
 */
int main(void)
{
	int ch;
	char la;

		for (ch = '0'; ch <= '9'; ch++)
		putchar((ch % 10) + '0');
		for (la = 'a'; la <= 'f'; la++)
		putchar(la);
		return (0);
		}
