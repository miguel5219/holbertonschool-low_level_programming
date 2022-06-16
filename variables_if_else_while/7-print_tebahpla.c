#include<stdio.h>

/**
 * main - print the alphabet backwards
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	return (0);
}
