#include "main.h"

/**
  * leet - in to code
  * @str: pointer to str
  * Return: pointer to char
  */

char *leet(char *str)
{
	int a, b;
	
	char l[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number_letter[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (a = 0; str[a] !='\0': a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (str[a] == l[b])
			{
				str[a] = number_letter[b];
			}
		}
	}
	return (str);
}
