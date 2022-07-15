#include "function_pointers.h"

/**
  * print_name - print name from main
  * @name: string
  * @f: pointer to function
  */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(15);
	f(name);
}
