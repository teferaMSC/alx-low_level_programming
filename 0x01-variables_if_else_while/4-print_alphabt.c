#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	char la;
	for (la = 'a'; la <= 'z'; la++
			)
	{
		if (la != 'e' && la != 'q')
			putchar (la);
	}
	putchar ('\n');
	return (0);
}
