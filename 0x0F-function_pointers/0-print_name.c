#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name by Function pointers.
 *
 * @name: The name that should be printed.
 * @f: Function pointer.
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
