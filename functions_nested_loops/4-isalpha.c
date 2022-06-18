#include "main.h"
/**
 *_isalpha - star line
 *@c: show this character
 *Return: letter, return 1
 *otherwise, return 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
