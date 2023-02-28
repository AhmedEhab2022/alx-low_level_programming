#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - Convert a string to an integer
 *
 * @s: The string
 *
 * Return: Always 0 (sucess)
 */
int _atoi(char *s)
{
	int i, len, num, neg_count;

	len = _strlen(s);
	num = 0;
	neg_count = 0;
	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (num > 214748364)
				num = num * -1;
			num = num * 10 + (s[i] - 48);
		}
		else if (s[i] == '-' && num == 0)
			neg_count++;
		else if (!(s[i] >= '0' && s[i] <= '9') && (num > 0))
			break;
	}
	if (num > -2147483648 && num < 0)
		num *= -1;
	if (neg_count % 2 != 0 && num != -2147483648)
		num = num * -1;
	return (num);
}
