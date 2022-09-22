#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: parameter pointer to a char
 * @src: parameter pointer to a char
 * Return: returns value of destination
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = scr[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
