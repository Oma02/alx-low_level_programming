#include <stdio.h>
/**
 * main - A program that prints the alphabets backwards in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
