#include "main.h"
/**
 * get_endianness - this is a function
 * Return: is c
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
