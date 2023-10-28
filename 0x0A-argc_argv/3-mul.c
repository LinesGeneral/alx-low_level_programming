#include <stdio.h>
#include <stdlib.h>

/**
* main - program multiples two numbers.
* @argc: parameter counts passed argument
* @argv: parameter display strings on command line
* Return: Always 0(success).
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
