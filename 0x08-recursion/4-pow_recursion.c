#include "main.h"
/**
*_pow_recursion - Returns the value of x raised to the power of y
*
*Return the value multiplied y times.
*/

int _pow_recursion(int x, int y)
{   
    if(y <= 0)
    {
        return (-1);
    }
    else
    {
        return x^y;
    }
}
