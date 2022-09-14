#include "main.h"
/**
 * _isalpha - check if character is an alphabetic character
 * @f: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int f)
{
	if ((f > 64 && f < 91) || (f > 96 && f < 123))
		return (1);
	else
		return (0);
}
