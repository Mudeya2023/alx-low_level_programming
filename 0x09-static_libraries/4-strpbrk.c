#include "main.h"

/**
 * _strpbrk - returns a pointer to the first coincidence with a sequence
 *  @m: string to review
 *  @accept: the sequence
 *
 *  Return: Returns null if there is no sequence
 */
char *_strpbrk(char *m, char *accept)
{
	int index, index2, cutter;

	cutter = 0;
	for (index = 0; m[index] != '\0'; index++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (m[index] == accept[index2])
			{
				cutter += 1;
				return (&m[index]);
			}
		}
	}
	if (cutter > 0)
		return (0);
	return (0);
}
