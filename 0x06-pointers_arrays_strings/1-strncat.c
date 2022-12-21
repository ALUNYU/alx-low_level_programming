#include "main.h"

/**
 * _strncat - concatenates specified values from src to dest
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: number of values to concatenate
 * Description: concatenates n number of values from src to end of dest
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}

