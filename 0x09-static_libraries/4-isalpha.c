#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: test subject
 * Return: 1 for if alpha, 0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
