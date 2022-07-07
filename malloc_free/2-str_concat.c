#include "main.h"

/**
  * str_concat - concatenate two strings
  * @s1: string 1
  * @s2: string 2
  * Return: s3
  */

char *str_concat(char *s1, char *s2)
{
	char *s3 = NULL;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (!*s1 && !*s2)
		return (NULL);

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	s3 = malloc((sizeof(char) * (i + j)) + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];

	for (j = 0; s2[j]; j++, i++)
		s3[i] = s2[j];

	return (s3);
}
