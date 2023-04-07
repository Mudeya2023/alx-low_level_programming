#include "main.h"

/**
 * _strcmp - compare two strings and return the ascii difference of
 * the first difference, if not returns 0
 *
 * @k1: string to compare
 * @k2: the comparison
 * Return: zero at match
 */

int _strcmp(char *k1, char *k2)
{
	int index;
	int cmp = 0;

	for (index = 0; *(k1 + index) != '\0'; index++)
	{
		if (*(k1 + index) != *(k2 + index))
		{
			cmp = (*(k1 + index) - *(k2 + index));
			break;
		}
	}
	return (cmp);
}
