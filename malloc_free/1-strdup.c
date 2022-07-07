#include "main.h"

/**
  * strdup - returns a pointer to a newly allocated.
  * @str: var
  * Return: 
  */

char *_strdup(char *str)
{
	char *s = NULL;
	int i = 0;

	if (str == NULL)
		return NULL;

	while (str[i])
		i++;
	i -= 1;
		 
	s = malloc((sizeof(char) * i) + 1);
	
	if (s == NULL)
		return NULL;

	for (i = 0; str[i]; i++)
		s[i] = str[i];
	
	return (s);

}
