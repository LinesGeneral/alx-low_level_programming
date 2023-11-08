#include <stdio.h>
#include "function_pointers.h"

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
