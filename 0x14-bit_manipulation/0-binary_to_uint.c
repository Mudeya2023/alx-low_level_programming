#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to binary number to be converted
 *
 * Return: converted number as an unsigned int, or 0 if
 *        there is an invalid character or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int str_len = 0, base = 1;

	if (!check_valid_string(b))
		return (0);

	while (b[str_len] != '\0')
		str_len++;

	while (str_len)
	{
		result += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}
	return (result);
}

/**
 * check_valid_string - checks if a string has only 0's and 1's
 * @b: string.
 *
 * Return: succes if string is valid, null otherwise
 */
int check_valid_string(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
