#include "main.h"

/**
 * _isalpha - checks if input is lowercase or uppercase
 * @c : char to be checked
 *
 * Description: It receives an input and checks if it is an upper case.
 *
 * Return: 1 (success) 0 (failure)
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
