#include<stdio.h>

/**
 * main - number, commas and spaces
 * Return: 0
 */

int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	{
		putchar(z);
		if (z < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
