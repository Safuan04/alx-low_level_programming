#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: this is a parameter
 * @f: this is a function as arguments
 * Return: is
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
