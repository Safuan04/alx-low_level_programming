#include "main.h"
#include <stdio.h>
/**
 * main - this is a function that prints all arguments it recieves in a new ln
 * @argc: this is a parameter
 * @argv: this is a parameter
 * Return: this is 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
