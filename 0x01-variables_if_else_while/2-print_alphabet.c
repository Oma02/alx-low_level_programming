#include <stdio>
/**
 * main - a program that prints alphabets in lowercase
 * Return: 0 (Succeded)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c >= 'z') {
		putchar (c);
		c++;
	}
	putchar('\n');
	return (0);
}
