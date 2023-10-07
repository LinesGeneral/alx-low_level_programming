#include <stdio.h>

/**
* main - Entry point
* void - empty argument
* Return: Always 0 (Success)
*/

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(alph[i]);
		}
	}
	putchar('\n');
	return (0);
}
