#include <stdio.h>
/**
 * main - A program that prints all single numbers in base 10
 * Return: 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar("%c", n);
		n++;
	}
	putchar("\n");
	return (0);
}
