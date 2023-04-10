#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is  func that adds positive numbers
 * @argc: this is aparameter
 * @argv: this is a parameter
 * Return: is 0
 */
int main(int argc, char *argv[]) {
	int sum = 0;
	int i;
	int j;

	if (argc == 1) {
		printf("0\n");
		return 0;
	}
	for (i = 1; i < argc; i++) {
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++) {
			if (arg[j] < '0' || arg[j] > '9') {
				printf("Error\n");
				return 1;
			}
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return 0;
}
