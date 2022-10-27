#include "main.h"
/**
 * _strcat - jointwo string
 * @dest: desination char
 * @src: source char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, n = 0;

	while (dest[n] != '\0')
		n++;
	for (i = 0; i < n && scr[i] != '\0'; i++)
		dest[n + i] = src[i];
	dest[n + i] = '\0';

	return (dest);
}
