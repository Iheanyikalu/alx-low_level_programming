#include "main.h"
/**
 * int _isupper(int c); - detect upper case
 *
 * @c: input character
 *
 * Return: (1) for true (0) not true
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
