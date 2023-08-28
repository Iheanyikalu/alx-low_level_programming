#include "main.h"
/**
 * _isalpha - return 1 when c is capital or lower
 *
 * Description: using _putchar
 * @c: collect character
 * Return: 1 if c is lower or cap
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}

