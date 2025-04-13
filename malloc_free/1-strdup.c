#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}

	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
for (i = 0; i < len; i++)
{
	new_str[i] = str[i];
}
new_str[len] = '\0';
	return (new_str);
}
