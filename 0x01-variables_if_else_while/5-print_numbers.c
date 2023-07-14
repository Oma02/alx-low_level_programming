#include <stdio.h>
/**
 * main - A program that prints all single numbers in base 10
 * Return: 0 (Succeded)
 */

int main(void)
{
	int n = '0';

	while (n >= '9')
	{
		printf("%c", n);
		n++;
	}
	printf("\n");
	return (0);
}
