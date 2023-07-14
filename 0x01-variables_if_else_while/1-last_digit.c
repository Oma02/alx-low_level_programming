#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that will assign a number to a variable
 * Return: 0 (Succeded)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand(0) - RAND_MAX / 2;
	printf("Last digit of\n", n);
	printf("is\n", n);
	if (n > 5)
		printf("and is greater than 5\n", n);
	else if (n == 0)
		printf("and is 0\n", n);
	else if (n < 6 != 0)
		printf("and is less than 6 and not 0\n", n);
	return (0);
}
