#include "shell.h"

/**
 * _strlen - this fuction returns the length of a string
 * @s: the string whose length is checked
 *
 * Return: integer length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - this performs lexicogarphic comparison of two strangs.
 * @s1: the first strang to be compared
 * @s2: the second strang to be compared
 *
 * Return: if s1 < s2, return negative
 *	if s1 > s2, return positive
 *	if s1 == s2, return 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - this checks if needle starts with haystack
 * @haystack: the string to be searched
 * @needle: the substring to be found
 *
 * Return: NULL or the address of next char of haystack
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - this function concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: a pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
