#include "shell.h"

/**
 * bfree - this function frees a pointer and NULLs the address
 * @ptr: the address of the pointer to be freed
 *
 * Return: If freed, return 1, otherwise return 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
