#include <stdio.h>
/**
 * main - A program that prints different combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	
	for (n = '0'; n < 100; n++)
	{
		if (n / 10 < n % 10)
		{
			putchar('0' + (n / 10));
			putchar('0' + (n % 10));

			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
