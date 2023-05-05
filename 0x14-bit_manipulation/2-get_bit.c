#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
* get_bit - Gets the value of a bit at a given index.
* @n: The bit.
* @index: The index to get the value at - indices start at 0.
*
* Return: The value of bit at index. Or -1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}