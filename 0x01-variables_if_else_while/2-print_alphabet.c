#include <stdio.h>

/**
* main - programs that execution at this point
* void - there is no argument
* Return: Always 0 (Success)
*/

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
