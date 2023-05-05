#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
*flip_bit - counts number of bits needed to be flipped
*@n: The number
*@m: The number to flip n to.
*
*Return: Number of bits to flip to get from n to m.
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bits = 0;

	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}

	return (bits);
}
