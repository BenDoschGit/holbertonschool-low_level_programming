#include "holberton.h"

/**
 * puts_half - prints half of the string
 * @str: string passed to fucntion
 * Return: none
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++) /* get string length*/
	{
	}
	/* if odd, reduce length by 1 before deviding.*/
	if ((i % 2 != 0) && (i > 1))
	{
		i++;
	}
	/* devide by 2 and increment until the null while printing */
	for (i = (i / 2) ; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
