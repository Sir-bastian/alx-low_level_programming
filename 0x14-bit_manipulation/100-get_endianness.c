#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: lf big-endian - 0
 * lf little-endian - 1.
 */

int get_endianness(void)
{
	int num = 1;
	char *endianness = (char *)&num;

	if (*endianness == 1)
		return (1);

	return (0);
}
