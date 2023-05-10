#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @k: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *k)
{
	int longit = 0;

	if (*k)
	{
		longit++;
		longit += _strlen_recursion(k + 1);
	}

	return (longit);
}
