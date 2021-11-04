#include "function_pointers.h"
/**
 * print_name - print the name
 * @name: char pointer
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
