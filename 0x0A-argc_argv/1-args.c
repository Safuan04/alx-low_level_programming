#include "main.h"
#include <stdio.h>
/**
 * main - this is a function that prints the number of arguments
 * @argc: this is a parameter
 * @argv: this is a parameter
 * Return: this is argc
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc -1);
	return (argc);
}
