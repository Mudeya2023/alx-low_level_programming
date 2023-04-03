#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @t: memory area to be filled
 * @b: char to copy
 * @k: number of times to copy b
 *
 * Return: pointer to the memory area t
 */
char *_memset(char *t, char b, unsigned int k)
{
	unsigned int i;

	for (i = 0; i < k; i++)
	{
		t[i] = b;
	}

	return (t);
}
