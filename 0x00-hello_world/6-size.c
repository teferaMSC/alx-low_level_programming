#include<stdio.h>
/**
 * main - print the size of various typesa baded onthe computer
 * it is compiiled and run on..
 * Returen:Always 0.
 */
int main(void)
{
	printf("Size of a char:byte(s)\n", sizeof(char));
	printf("Size of a int:%zubyte(s)\n", sizeof(int));   
	printf("Size of a longint:%zu byte(s)\n", sizeof(long int));   
	printf("Size of a float:%zubyte(s)\n", sizeof(float));   
	return (0);
}
