#include "main.h"

/**
 * _islower - tests if lower or uppercase
 * @c: character passed as integer
 * Description: c is passed  as an arguement
 * Return:1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'Z');
}
