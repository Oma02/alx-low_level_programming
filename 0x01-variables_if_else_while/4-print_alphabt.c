#include <stdio.h>
/**
 * main - A prigram that prints alphabets
 * Return: 0 (Succeded)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z' && c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
