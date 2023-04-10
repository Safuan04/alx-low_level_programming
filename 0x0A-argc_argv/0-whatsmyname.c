#include "main.h"
#include <stdio.h>
/**
 * main - this is a function that prints the name of the program
 * @argv: this is a parameter
 * @argc: this is a parameter
 * Return: this is 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
