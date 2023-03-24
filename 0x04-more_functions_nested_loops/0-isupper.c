#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * 
 * @c: the carachar that will be check.
 *
 * return: 1 or 0
 */
int _isupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        return(1);
    }
    else
    {
        return(0);
    }
    
}
