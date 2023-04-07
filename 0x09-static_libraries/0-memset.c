#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @m: the address of memory to print
 * @b: the byte to write
 * @s: the number of spaces to write
 * Return: Returns value to memory area m
 */

char *_memset(char *m, char b, unsigned int s)
{
	int index;

	for (index = 0; s > 0; s--)
	{
		*(m + index) = (b + 0);
		index++;
	}
	return (m);
}
