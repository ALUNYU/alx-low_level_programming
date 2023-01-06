#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks to see if input is a number
 * @s: input to check for numberhood
 * Return: 1 if it is a number, 0 if not
 */

{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
