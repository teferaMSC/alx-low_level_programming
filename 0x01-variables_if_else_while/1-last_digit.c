#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	int n;
	int last;
	sran(time(0));

	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("last digit of %1 is %1 and greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %1 is %1 and is 0\n", n,  last);
	else if (last < 6)
	printf("last digit of %1 is %1 and less than 6 and not 0\n", n, last);
	return (0);
}
