#include "function_pointers.h"

/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int s = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (s < size)
			{
				if (cmp(array[s]))
					return (s);

				s++;
			}
		}
	}
	return (-1);
}
