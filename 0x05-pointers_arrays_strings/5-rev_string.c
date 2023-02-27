#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse the string
 *
 * @s: The string
 */
void rev_string(char *s)
{
	int j, temp;
	int i = _strlen(s) - 1;
	int k = i;

	for (j = 0; j < (k / 2) + 1; j++)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
		i--;
	}
}
