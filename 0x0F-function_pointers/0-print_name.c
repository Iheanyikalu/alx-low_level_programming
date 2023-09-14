#include "function_pointers.h"
/**
 * print_name - print a name
 *
 * @f: hold the starting string
 * @name: name of person
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
