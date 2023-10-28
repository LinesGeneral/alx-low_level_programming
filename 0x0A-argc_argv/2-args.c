#include <stdio.h>

/**
* main - program prints all arguments it receives
* @argc: parameter is used for argument count
* @argv: parameter shows strings passed on the command line
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
