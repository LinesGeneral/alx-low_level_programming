#include <stdio.h>
#include "function_pointers.h"
#include <ctype.h>
/**
* print_name - function prints a name
* @name: first parameter
* @f: pointer
*
* Return: no return(void function)
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
* print_default - function takes a char value
* @name: first parametr
*
* Return: no return (void function)
*/
void print_default(char *name)
{
	printf("%s\n", name);
}
/**
* print_upcase - function prints in uppercase letters
* @name: first parameter
*
* Return: no return(void function)
*/
void print_upcase(char *name)
{
	char *uppercase_name = name;
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		uppercase_name[i] = toupper(name[i]);
	}
	printf("%s\n", uppercase_name);
}
