#include "main.h"
/**
*Function - Function that returns value ox x raise to power y
*
*Return: Always 0.
*/

int _pow_recursion(int x, int y)
{   
    if(y <= 0)
    {
        return -1;
    }
    else
    {
        return x^y;
    }
}
