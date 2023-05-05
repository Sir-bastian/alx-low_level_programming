#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
* set_bit - Sets the valu of a bit at a given index to 1.
* @n: A pointer to the bit. 
* @index: The index to set value at - indices start at 0.
*
* Return: -1 on Error, Otherwise return 1.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
