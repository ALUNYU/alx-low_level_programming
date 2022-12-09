#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers with commas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i=48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			puchar(44);
			puchar(32);
		}
		i++;
	}
	puchar(10);

	return (0);
}
