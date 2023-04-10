#include <stdlib.h>
#include <stdio.h>
/**
 * main - this is a function that print the mul of 2 arguments
 * @argc: this is a parameter
 * @argv: this is a parameter
 * Return: this is 0
 */
int main(int argc, char *argv[])
{
	int rslt;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else 
	{
		rslt = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", rslt);
	}
	return (0);
}
