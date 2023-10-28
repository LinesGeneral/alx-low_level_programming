#include <stdio.h>

/**
* main - prints the number of arguments passed to it
* @argc: arguments counts number of arguments
* @argv: arguments prints out passed string
* Return: Always 0;
*/
int main (int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
