#include "main.h"
/**
 * -isdigit - to check if paramaete is a digit or character
 *
 *  @c: parameter
 *  return: 1 if its a number 0 otherwise
 */
int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
