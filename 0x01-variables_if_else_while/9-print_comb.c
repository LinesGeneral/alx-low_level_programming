#include <stdio.h>

/**
* main - Entry point
* description - print possible combinations of single-digit numbers
* Return: Always (Success)
*/

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}