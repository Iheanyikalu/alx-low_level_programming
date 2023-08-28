#include <stdio.h>
/**
 * main - a programme to print putchar
 *
 * Return: 0 (sucess)
 *
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		 putchar(c[i]);
	}
	putchar('\n');

	return (0);
}
