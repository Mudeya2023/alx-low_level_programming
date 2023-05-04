#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>

/**
* prototype of 0x14. C - Bit manipulation
* function that converts a binary number to an unsigned int
* function that prints the binary representation of a number.
* function that returns the value of a bit at a given index.
*/
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
