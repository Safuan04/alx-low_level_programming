#include "main.h"
/**
 * rev_string - this is a function that prints arrays in rev
 * @s: this is a parmeter
 */
void rev_string(char *s)
{
	int i;
	int count;
	int rev = s[0];

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0 ; i < count ; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
