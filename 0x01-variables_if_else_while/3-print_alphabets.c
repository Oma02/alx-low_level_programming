#include <stdio.h>
/**
 * main - A program that prints alphabets in lower and uppercase
 * Return: 0 (Succeded)
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z')
	{
		putchar(c);
	c++;
	}
	while
		(d <= 'Z')
	{
		putchar(d);
	d++;
	}
	putchar('\n');
	return (0);
}
