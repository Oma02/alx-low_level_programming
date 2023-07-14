#include <stdio.h>
/**
 * main - A program that prints all numbers in base 16 in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
