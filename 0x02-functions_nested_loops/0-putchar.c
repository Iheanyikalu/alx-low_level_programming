#include <stdio.h>
/**
 * main - a programme to print putchar
 *
 * return: 0 (sucess)
 *
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
